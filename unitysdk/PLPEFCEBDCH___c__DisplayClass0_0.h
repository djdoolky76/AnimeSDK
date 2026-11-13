#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPEFCEBDCH;
namespace System { class String; }

#define PLPEFCEBDCH___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x18892EB0)
#define PLPEFCEBDCH___C__DISPLAYCLASS0_0__PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18893620)

inline static constexpr unsigned int PLPEFCEBDCH___c__DisplayClass0_0_TypeDefinitionIndex = 74040;

	class PLPEFCEBDCH___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::PLPEFCEBDCH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH___C__DISPLAYCLASS0_0__PLAYANIM_B__0_OFFSET))(this);
		}

	};
