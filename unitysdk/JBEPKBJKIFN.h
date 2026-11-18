#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int JBEPKBJKIFN_TypeDefinitionIndex = 89003;

enum class JBEPKBJKIFN : ::System::Int32
{
	ActiveAndNotGet = 1,
	ThisMonthUnActive = 0,
	TodayAndUnActive = 4,
	NotThisMonthAndUnActive = 6,
	Today = 3,
	ActiveAndGot = 2,
	NotThisMonthAndActive = 5,
};
