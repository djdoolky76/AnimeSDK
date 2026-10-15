#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDNBBCOBGPH;

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C6620)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0___FILLWITHALTERNATIVEAVATARS_B__0_OFFSET UNITYSDK_OFFSET(0xE1CA020)

namespace RPG::Client
{
	class TeamBuildCalculator___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Int32 altIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void __FillWithAlternativeAvatars_b__0(::MDNBBCOBGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDNBBCOBGPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0___FILLWITHALTERNATIVEAVATARS_B__0_OFFSET))(this, a1);
		}

	};
}
