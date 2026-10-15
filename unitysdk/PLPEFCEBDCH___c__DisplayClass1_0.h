#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPEFCEBDCH;
namespace System { class String; }

#define PLPEFCEBDCH___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC30E260)
#define PLPEFCEBDCH___C__DISPLAYCLASS1_0__PLAYANIMFROMEND_B__0_OFFSET UNITYSDK_OFFSET(0xC30E770)

	class PLPEFCEBDCH___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::PLPEFCEBDCH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimFromEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH___C__DISPLAYCLASS1_0__PLAYANIMFROMEND_B__0_OFFSET))(this);
		}

	};
