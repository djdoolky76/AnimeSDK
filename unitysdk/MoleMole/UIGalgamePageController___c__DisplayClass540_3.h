#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDCC90)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__PLAYNPCFADEACTIONS_B__7_OFFSET UNITYSDK_OFFSET(0x16EDD4C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__PLAYNPCFADEACTIONS_B__8_OFFSET UNITYSDK_OFFSET(0x16EDCCA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_6_OFFSET UNITYSDK_OFFSET(0x16EDD260)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass540_3_TypeDefinitionIndex = 44750;

	template <typename T1, typename T2, typename T3>
	class UIGalgamePageController___c__DisplayClass540_3 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalGameNPCFadeAction* fadeAction; // 0x10
		::System::Object* CS___8__locals3; // 0x18
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x20
		::System::Int32 locationKey; // 0x28
		::MoleMole::GalGame::GalNPCLocation location; // 0x2C
		::System::Int32 currStageNodeIdx; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__8(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__PLAYNPCFADEACTIONS_B__8_OFFSET))(this, res);
		}

		::System::Void _PlayNPCFadeActions_g__ApplyPoseNFacialWhenFade_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__PLAYNPCFADEACTIONS_G__APPLYPOSENFACIALWHENFADE_6_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_3__PLAYNPCFADEACTIONS_B__7_OFFSET))(this);
		}
	};
}
