#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFIAMAJCAOA.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6EC60)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHSKINS_B__0_OFFSET UNITYSDK_OFFSET(0x17D6EC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass23_0_TypeDefinitionIndex = 43417;

	class UIPlayerAccessoryPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::HFIAMAJCAOA selectedSkinType; // 0x10
		::System::Int32 selectedSkinID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshSkins_b__0(::PNIHGNDLMIN* skinData)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHSKINS_B__0_OFFSET))(this, skinData);
		}
	};
}
