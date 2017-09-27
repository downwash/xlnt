// Copyright (c) 2014-2017 Thomas Fussell
// Copyright (c) 2010-2015 openpyxl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, WRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE
//
// @license: http://www.opensource.org/licenses/mit-license.php
// @author: see AUTHORS file

#pragma once

#include <string>

#include <xlnt/xlnt_config.hpp>

namespace xlnt {


    /// <summary>
    /// Protection applied to a particular worksheet to prevent it from being modified.
    /// </summary>
    class XLNT_API sheet_protection
    {
    public:
        /// <summary>
        /// Calculates and returns the hash of the given protection password.
        /// </summary>
        static std::string hash_password(const std::string &password);

        /// <summary>
        /// Sets the protection password to password.
        /// </summary>
        void password(const std::string &password);

        /// <summary>
        /// Returns the hash of the password set for this sheet protection.
        /// </summary>
        std::string hashed_password() const;

    private:
        /// <summary>
        /// The hash of the password.
        /// </summary>
        std::string hashed_password_;

        /// <summary>
        /// The password hashing algorithm.
        /// </summary>
        std::string hash_algorithm_;

        /// <summary>
        /// If 1 or true then AutoFilters should not be allowed to operate when the sheet is protected.
        /// </summary>
        bool auto_filter_ = false;

        /// <summary>
        /// If 1 or true then deleting columns should not be allowed when the sheet is protected.
        /// </summary>
        bool delete_columns_ = false;

        /// <summary>
        /// If 1 or true then deleting rows should not be allowed when the sheet is protected.
        /// </summary>
        bool delete_rows_ = false;

        /// <summary>
        /// If 1 or true then formatting cells should not be allowed when the sheet is protected.
        /// </summary>
        bool format_cells_ = false;

        /// <summary>
        /// If 1 or true then formatting columns should not be allowed when the sheet is protected.
        /// </summary>
        bool format_columns_ = false;

        /// <summary>
        /// If 1 or true then formatting rows should not be allowed when the sheet is protected.
        /// </summary>
        bool format_rows_ = false;

        /// <summary>
        /// Specifies the hash value for the password required to edit this worksheet.
        /// The possible values for this attribute are defined by the W3C XML Schema base64Binary datatype.
        /// </summary>
        std::string hash_value_;

        /// <summary>
        /// If 1 or true then inserting columns should not be allowed when the sheet is protected.
        /// </summary>
        bool insert_columns_ = false;

        /// <summary>
        /// If 1 or true then inserting hyperlinks should not be allowed when the sheet is protected.
        /// </summary>
        bool insert_hyperlinks_ = false;

        /// <summary>
        /// If 1 or true then inserting rows should not be allowed when the sheet is protected.
        /// </summary>
        bool insert_rows_ = false;

        /// <summary>
        /// If 1 or true then editing of objects should not be allowed when the sheet is protected.
        /// </summary>
        bool objects_ = false;

        /// <summary>
        /// If 1 or true then PivotTables should not be allowed to operate when the sheet is protected.
        /// </summary>
        bool pivot_tables_ = false;

        /// <summary>
        /// Specifies the salt which was prepended to the user-supplied password before it was
        /// hashed using the hashing algorithm defined by the preceding attribute values to generate
        /// the hashValue attribute, and which shall also be prepended to the user - supplied
        /// password before attempting to generate a hash value for comparison.
        /// The possible values for this attribute are defined by the W3C XML Schema base64Binary datatype.
        /// </summary>
        std::string salt_value_;

        /// <summary>
        /// If 1 or true then Scenarios should not be edited when the sheet is protected.
        /// </summary>
        bool scenarios_ = false;

        /// <summary>
        /// If 1 or true then selection of locked cells should not be allowed when the sheet is protected.
        /// </summary>
        bool select_locked_cells = false;

        /// <summary>
        /// If 1 or true then selection of unlocked cells should not be allowed when the sheet is protected.
        /// </summary>
        bool select_unlocked_cells = false;

        /// <summary>
        /// If 1 or true then the sheet is protected.
        /// </summary>
        bool sheet_ = false;

        /// <summary>
        /// If 1 or true then sorting should not be allowed when the sheet is protected.
        /// </summary>
        bool sort_ = false;

        /// <summary>
        /// Specifies the number of times the hashing function shall be iteratively run (runs using
        /// each iteration's result plus a 4 byte value (0-based, little endian) containing the number
        /// of the iteration as the input for the next iteration) when attempting to compare a usersupplied
        /// password with the value stored in the hashValue attribute.
        /// The possible values for this attribute are defined by the W3C XML Schema unsignedInt datatype.
        /// </summary>
        std::uint32_t spin_count_ = false;

    };

} // namespace xlnt
