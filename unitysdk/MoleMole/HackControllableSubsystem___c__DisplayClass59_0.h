#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE9300)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__3_OFFSET UNITYSDK_OFFSET(0x13EE9740)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__4_OFFSET UNITYSDK_OFFSET(0x13EE9750)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__FINISHFORCEDEXITBLACKFADE_1_OFFSET UNITYSDK_OFFSET(0x13EE9360)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__ISBACKTOAVATARFINISHED_0_OFFSET UNITYSDK_OFFSET(0x13EE9310)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__STARTFORCEEXITBLACKFADEFLOW_2_OFFSET UNITYSDK_OFFSET(0x13EE9470)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass59_0_TypeDefinitionIndex = 41057;

	class HackControllableSubsystem___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::Action* startBackToAvatar; // 0x10
		::System::Action* cancelForceExitStreamingWait; // 0x18
		::System::Action* finishBackToAvatar; // 0x20
		::System::Func_1<::System::Boolean>* isBackToAvatarFinished; // 0x28
		::System::Single cameraTime; // 0x30
		::System::Single fadeInTime; // 0x34
		::System::Single fadeOutTime; // 0x38
		::System::Boolean forceExitBlackFadeFlowStarted; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 exitStreamingPosition; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessForceExitStreamingBlackFade_g__IsBackToAvatarFinished_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__ISBACKTOAVATARFINISHED_0_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_g__FinishForcedExitBlackFade_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__FINISHFORCEDEXITBLACKFADE_1_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_g__StartForceExitBlackFadeFlow_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__STARTFORCEEXITBLACKFADEFLOW_2_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__3(::DJDDGKFCNAJ_IGOPHLMOGAO _)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__3_OFFSET))(this, _);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__4_OFFSET))(this);
		}
	};
}
