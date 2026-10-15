#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPEFCEBDCH;
namespace System { class String; }

#define PLPEFCEBDCH___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC30E140)
#define PLPEFCEBDCH___C__DISPLAYCLASS0_0__PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0xC30E6F0)

inline static constexpr unsigned int PLPEFCEBDCH___c__DisplayClass0_0_TypeDefinitionIndex = 72012;

	class PLPEFCEBDCH___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::PLPEFCEBDCH* __4__this; // 0x10
		::System::String* name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH___C__DISPLAYCLASS0_0__PLAYANIM_B__0_OFFSET))(this);
		}

	};
