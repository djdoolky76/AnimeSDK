#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/EyeProtectionParameter.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_CPJHCALNJJN_OFFSET UNITYSDK_OFFSET(0xE94F190)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE9503A0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE94F660)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_GCAELPFNHIO_OFFSET UNITYSDK_OFFSET(0xE94F3E0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE94F100)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_MKBPGGLDHKI_OFFSET UNITYSDK_OFFSET(0xE94F450)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xE94F9D0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE94F200)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE94EFD0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE94F2B0)

namespace RPGTools::Timeline::VFX
{
	class EyeProtectionTimelineBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::EyeProtectionParameter Parameter; // 0x18
		::RPGTools::Timeline::VFX::EyeProtectionParameter OrignParameter; // 0x30
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x48
		::System::Boolean _openEyeProtect; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::EyeProtectionParameter CPJHCALNJJN()
		{
			return ((::RPGTools::Timeline::VFX::EyeProtectionParameter(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_CPJHCALNJJN_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::RPGTools::Timeline::VFX::EyeProtectionParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::EyeProtectionParameter))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_NLKPKABOIPJ_OFFSET))(this, a1);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

		::System::Void GCAELPFNHIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_GCAELPFNHIO_OFFSET))(this);
		}

		::System::Void MKBPGGLDHKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_MKBPGGLDHKI_OFFSET))(this);
		}

	};
}
