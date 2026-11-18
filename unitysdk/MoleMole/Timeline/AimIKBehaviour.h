#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimeLinePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1249F2F0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1249FCC0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_JNGCCANMFAM_OFFSET UNITYSDK_OFFSET(0x1249F4B0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1249FCB0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1249FCD0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1249F980)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1249FCE0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1249F7C0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1249FB40)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1249FC90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AimIKBehaviour_TypeDefinitionIndex = 61843;

	class AimIKBehaviour : public ::MoleMole::Timeline::TimeLinePlayableBehaviour
	{
	public:
		::System::Boolean enabled; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single weight; // 0x1C
		::RootMotion::FinalIK::AimIK* _aimIK; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::RootMotion::FinalIK::AimIK* JNGCCANMFAM(::System::Object* NEEMKJBIIBC)
		{
			return ((::RootMotion::FinalIK::AimIK*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_JNGCCANMFAM_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
