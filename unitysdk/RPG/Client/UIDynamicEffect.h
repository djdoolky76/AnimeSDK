#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IKBAMHGDEJC;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_UIDYNAMICEFFECT_BOELMKAJPLD_OFFSET UNITYSDK_OFFSET(0xE394E30)
#define RPG_CLIENT_UIDYNAMICEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xE394FB0)
#define RPG_CLIENT_UIDYNAMICEFFECT_DMGJLHHKBEI_OFFSET UNITYSDK_OFFSET(0xE394C40)
#define RPG_CLIENT_UIDYNAMICEFFECT_FKDKNLHMGCA_OFFSET UNITYSDK_OFFSET(0xE394A40)
#define RPG_CLIENT_UIDYNAMICEFFECT_JMKFLNBDOGJ_OFFSET UNITYSDK_OFFSET(0xE3949C0)
#define RPG_CLIENT_UIDYNAMICEFFECT_KCCALFDFMKG_OFFSET UNITYSDK_OFFSET(0xE394D80)
#define RPG_CLIENT_UIDYNAMICEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE394910)
#define RPG_CLIENT_UIDYNAMICEFFECT_LNHBKHDFKHM_OFFSET UNITYSDK_OFFSET(0xE394560)
#define RPG_CLIENT_UIDYNAMICEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE394BF0)
#define RPG_CLIENT_UIDYNAMICEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE394B70)
#define RPG_CLIENT_UIDYNAMICEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xE394400)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDynamicEffect_TypeDefinitionIndex = 69096;

	class UIDynamicEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* EffectPath; // 0x18
		::UnityEngine::Vector3 PositionOffset; // 0x20
		::UnityEngine::Vector3 RotationOffset; // 0x2C
		::UnityEngine::Vector3 Scale; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* DAANLFIJLBL; // 0x48
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0x50
		::IKBAMHGDEJC* IFBFMPAGKPN; // 0x58
		::System::Single DICCHHJDDHO; // 0x60
		// static const ::System::Object PHPBBKFMKFB; // 0x0
		// static const ::System::Object IKKEALLEIBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_PLAY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void JMKFLNBDOGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_JMKFLNBDOGJ_OFFSET))(this);
		}

		::System::Void FKDKNLHMGCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_FKDKNLHMGCA_OFFSET))(this);
		}

		::System::Boolean KCCALFDFMKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_KCCALFDFMKG_OFFSET))(this);
		}

		::System::Void DMGJLHHKBEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_DMGJLHHKBEI_OFFSET))(this);
		}

		::System::Void LNHBKHDFKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_LNHBKHDFKHM_OFFSET))(this);
		}

		::IKBAMHGDEJC* BOELMKAJPLD()
		{
			return ((::IKBAMHGDEJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDYNAMICEFFECT_BOELMKAJPLD_OFFSET))(this);
		}

	};
}
