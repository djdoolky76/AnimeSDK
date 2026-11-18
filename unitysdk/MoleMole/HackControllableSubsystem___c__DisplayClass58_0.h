#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }
namespace MoleMole::Config { class ConfigControllableObjectCommonParam; }
namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE8F40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x13EE9030)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__2_OFFSET UNITYSDK_OFFSET(0x13EE9040)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__3_OFFSET UNITYSDK_OFFSET(0x13EE9070)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__4_OFFSET UNITYSDK_OFFSET(0x13EE92F0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__5_OFFSET UNITYSDK_OFFSET(0x13EE9210)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_G__FINISHBACKTOAVATAR_0_OFFSET UNITYSDK_OFFSET(0x13EE8F50)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass58_0_TypeDefinitionIndex = 41058;

	class HackControllableSubsystem___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle viewObject; // 0x10
		::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable; // 0x20
		::System::Action* onCameraBackAvatarMoveEnd; // 0x28
		::MoleMole::HackControllableSubsystem* __4__this; // 0x30
		::System::Action* __9__5; // 0x38
		::System::Boolean backToAvatarFinished; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single fadeOutTime; // 0x44
		::System::Single cameraTime; // 0x48
		::System::Single fadeInTime; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_g__FinishBackToAvatar_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_G__FINISHBACKTOAVATAR_0_OFFSET))(this);
		}

		::System::Boolean _ExitCurrentControllableBackToAvatar_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__1_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__2_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__3(::DJDDGKFCNAJ_IGOPHLMOGAO reason)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__3_OFFSET))(this, reason);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__5_OFFSET))(this);
		}

		::System::Void _ExitCurrentControllableBackToAvatar_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS58_0__EXITCURRENTCONTROLLABLEBACKTOAVATAR_B__4_OFFSET))(this);
		}
	};
}
