#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PropLodTemplateName : ::System::Int32
	{
		WithoutLod = 0,
		Prop_Test = 1,
		Prop_Default = 2,
		Prop_Huge = 3,
		Prop_80 = 4,
		Prop_60 = 5,
		Prop_Global = 6,
	};
}
