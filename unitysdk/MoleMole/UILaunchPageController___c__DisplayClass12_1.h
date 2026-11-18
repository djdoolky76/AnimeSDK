#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182ED720)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_1__PLAYGAMELOGO_B__5_OFFSET UNITYSDK_OFFSET(0x182ED730)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c__DisplayClass12_1_TypeDefinitionIndex = 49588;

	template <typename T>
	class UILaunchPageController___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::DGDNKBFMHME* video; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_1__PLAYGAMELOGO_B__5_OFFSET))(this);
		}
	};
}
