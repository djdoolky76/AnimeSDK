#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_CKIFAPPGNMI_OFFSET UNITYSDK_OFFSET(0x15AE4260)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_DNFDNCOHLBH_OFFSET UNITYSDK_OFFSET(0x15AE3D50)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x15AE4570)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x15AE4650)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_FHHFLIPPPBM_OFFSET UNITYSDK_OFFSET(0x15AE4600)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15AE4470)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_GHLOAKNLOJC_OFFSET UNITYSDK_OFFSET(0x15AE3F80)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15AE41F0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15AE45C0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15AE41B0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15AE3DD0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_REFRESHTIMESCALE_OFFSET UNITYSDK_OFFSET(0x15AE44B0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_START_OFFSET UNITYSDK_OFFSET(0x15AE3C60)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE4510)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoTimelineTickProxy_TypeDefinitionIndex = 70430;

	class MonoTimelineTickProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isFixedUpdate; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single CAOPDAMCNCN; // 0x1C
		::System::Single EHDPKGDPMIG; // 0x20
		::System::Single time; // 0x24
		::System::Boolean isPlaying; // 0x28
		::System::Byte _padding1[0x7];
		::UnityEngine::Playables::PlayableDirector* LEMDDJFGKMM; // 0x30
		::Il2CppArray<::UnityEngine::ParticleSystem*>* AIIMLLCINPM; // 0x38
		::UnityEngine::WaitForFixedUpdate* ELOOGKBNDHJ; // 0x40
		::UnityEngine::Coroutine* GMOHBFANPJM; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void RefreshTimeScale(::System::Single BLLPKIHOIMF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_REFRESHTIMESCALE_OFFSET))(this, BLLPKIHOIMF);
		}

		::System::Void GHLOAKNLOJC(::System::Single DPEJIEMHBNH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_GHLOAKNLOJC_OFFSET))(this, DPEJIEMHBNH);
		}

		::System::Void CKIFAPPGNMI(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_CKIFAPPGNMI_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Collections::IEnumerator* DNFDNCOHLBH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_DNFDNCOHLBH_OFFSET))(this);
		}

		::System::Void DNNJOOJBJNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_DNNJOOJBJNB_OFFSET))(this);
		}

		::System::Void LCJEELHBNHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_LCJEELHBNHG_OFFSET))(this);
		}

		::System::Void FHHFLIPPPBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_FHHFLIPPPBM_OFFSET))(this);
		}

		::System::Void ECEBDPJEKNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ECEBDPJEKNN_OFFSET))(this);
		}
	};
}
