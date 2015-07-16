#pragma once

#include <sstream>
#include <boost/bind.hpp>
#include <boost/noncopyable.hpp>
#include <boost/enable_shared_from_this.hpp>
#include "common/utils.hpp"

#define CN_CALLBACK(CLASS, FUN, ...)
	\
	strand_->wrap(
	\
		boost::bind(
	\
			&CLASS::FUN,
		)
	)
