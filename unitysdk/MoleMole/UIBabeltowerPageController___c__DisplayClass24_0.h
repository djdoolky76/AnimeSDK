#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace MoleMole { class UIBabeltowerPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3382E0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1A340820)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x1A3409D0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x1A340BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass24_0_TypeDefinitionIndex = 87203;

	class UIBabeltowerPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::LGINJIKKBJA* btn; // 0x10
		::LGINJIKKBJA* startConsoleBtn; // 0x18
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x20
		::System::Action* __9__2; // 0x28
		::UnityEngine::Animation* rootAnim; // 0x30
		::UnityEngine::Events::UnityAction* __9__1; // 0x38
		::System::Int32 lastPhase; // 0x40
		::System::Int32 curPhase; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__2_OFFSET))(this);
		}
	};
}
