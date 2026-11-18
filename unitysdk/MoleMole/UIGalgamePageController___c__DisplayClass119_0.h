#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS119_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180A2430)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS119_0__PLAYNPCFADESOUND_B__0_OFFSET UNITYSDK_OFFSET(0x180A2440)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass119_0_TypeDefinitionIndex = 44814;

	class UIGalgamePageController___c__DisplayClass119_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalNPCLocation location; // 0x10
		::System::Boolean fadeIn; // 0x14
		::System::Boolean isDouble; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS119_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeSound_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS119_0__PLAYNPCFADESOUND_B__0_OFFSET))(this);
		}
	};
}
