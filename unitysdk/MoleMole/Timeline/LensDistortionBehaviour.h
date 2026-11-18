#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LensDistortionBehaviour_DHCNMBAIOLH.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x19F5BD60)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x19F5D470)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x19F5D480)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_NKIILDNFHGP_OFFSET UNITYSDK_OFFSET(0x19F5C010)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x19F5C4E0)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x19F5D460)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19F5C400)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x19F5D450)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19F5CEA0)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19F5D090)
#define MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5D410)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LensDistortionBehaviour_TypeDefinitionIndex = 74933;

	class LensDistortionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LensDistortionBehaviour_DHCNMBAIOLH _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_intensity; // 0x51
		::System::Boolean use_intensity; // 0x52
		::System::Byte _padding0[0x1];
		::System::Single intensity; // 0x54
		::System::Boolean active_xMultiplier; // 0x58
		::System::Boolean use_xMultiplier; // 0x59
		::System::Byte _padding1[0x2];
		::System::Single xMultiplier; // 0x5C
		::System::Boolean active_yMultiplier; // 0x60
		::System::Boolean use_yMultiplier; // 0x61
		::System::Byte _padding2[0x2];
		::System::Single yMultiplier; // 0x64
		::System::Boolean active_center; // 0x68
		::System::Boolean use_center; // 0x69
		::System::Byte _padding3[0x2];
		::UnityEngine::Vector2 center; // 0x6C
		::System::Boolean active_scale; // 0x74
		::System::Boolean use_scale; // 0x75
		::System::Byte _padding4[0x2];
		::System::Single scale; // 0x78
		::System::Boolean active_depthClip; // 0x7C
		::System::Boolean use_depthClip; // 0x7D
		::System::Byte _padding5[0x2];
		::System::Single depthClip; // 0x80
		::System::Byte _padding6[0x4];
		::UnityEngine::Rendering::Universal::LensDistortion* _LensDistortion; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::LensDistortion* NKIILDNFHGP(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::LensDistortion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDISTORTIONBEHAVIOUR_NKIILDNFHGP_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
