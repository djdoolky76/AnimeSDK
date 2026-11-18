#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }
namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x104268F0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS45_0__ENTERCURRENTCONTROLLABLE_B__0_OFFSET UNITYSDK_OFFSET(0x10426900)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass45_0_TypeDefinitionIndex = 41064;

	class HackControllableSubsystem___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle viewObject; // 0x10
		::System::Action* onCameraMoveEnd; // 0x20
		::MoleMole::HackControllableSubsystem* __4__this; // 0x28
		::System::UInt32 cameraHackTransitionToken; // 0x30
		::Foundation::Coroutine::CoroutineHandle enterTransitionHandle; // 0x34
		::System::Boolean isCameraControllableEnter; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterCurrentControllable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS45_0__ENTERCURRENTCONTROLLABLE_B__0_OFFSET))(this);
		}
	};
}
