/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pdu_range_filter.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(96376deaeea0ce43202e17bc1e05842e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/pdu_utils/pdu_range_filter.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_range_filter_pydoc.h>

void bind_pdu_range_filter(py::module& m)
{

    using pdu_range_filter = ::gr::pdu_utils::pdu_range_filter;


    py::class_<pdu_range_filter,
               gr::block,
               gr::basic_block,
               std::shared_ptr<pdu_range_filter>>(
        m, "pdu_range_filter", D(pdu_range_filter))

        .def(py::init(&pdu_range_filter::make),
             py::arg("key"),
             py::arg("min"),
             py::arg("max"),
             py::arg("invert"),
             D(pdu_range_filter, make))


        .def("set_key",
             &pdu_range_filter::set_key,
             py::arg("key"),
             D(pdu_range_filter, set_key))


        .def("set_min",
             &pdu_range_filter::set_min,
             py::arg("min"),
             D(pdu_range_filter, set_min))


        .def("set_max",
             &pdu_range_filter::set_max,
             py::arg("max"),
             D(pdu_range_filter, set_max))


        .def("set_inversion",
             &pdu_range_filter::set_inversion,
             py::arg("invert"),
             D(pdu_range_filter, set_inversion))

        ;
}