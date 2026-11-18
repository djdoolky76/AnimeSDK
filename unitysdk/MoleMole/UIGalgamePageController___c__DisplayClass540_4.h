#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_4__CTOR_OFFSET UNITYSDK_OFFSET(0x166B2A50)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_4__PLAYNPCFADEACTIONS_B__9_OFFSET UNITYSDK_OFFSET(0x166B2A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass540_4_TypeDefinitionIndex = 44762;

	template <typename T1, typename T2, typename T3, typename T4>
	class UIGalgamePageController___c__DisplayClass540_4 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals4; // 0x10
		::System::Int32 bgLocationKey; // 0x18
		::MoleMole::GalGame::GalNPCLocation bgDirection; // 0x1C
		::System::Int32 bgStageIdx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_4__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_4__PLAYNPCFADEACTIONS_B__9_OFFSET))(this);
		}
	};
}
