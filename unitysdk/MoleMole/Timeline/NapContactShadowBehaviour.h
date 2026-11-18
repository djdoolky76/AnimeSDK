#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NapContactShadowBehaviour_NAPMMKNNGDM.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15AE5C50)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_DAHPMEGEJFD_OFFSET UNITYSDK_OFFSET(0x15AE5E30)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15AE6E60)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x15AE6E40)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15AE62C0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x15AE6E30)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15AE6220)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15AE6E50)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15AE69C0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15AE6B70)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE6E10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapContactShadowBehaviour_TypeDefinitionIndex = 53669;

	class NapContactShadowBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NapContactShadowBehaviour_NAPMMKNNGDM _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x2C
		::System::Boolean active_enabled; // 0x2D
		::System::Boolean use_enabled; // 0x2E
		::System::Boolean enabled; // 0x2F
		::System::Boolean active_sampleCount; // 0x30
		::System::Boolean use_sampleCount; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 sampleCount; // 0x34
		::System::Boolean active_worldSpaceLength; // 0x38
		::System::Boolean use_worldSpaceLength; // 0x39
		::System::Byte _padding1[0x2];
		::System::Single worldSpaceLength; // 0x3C
		::UnityEngine::Rendering::Universal::NapContactShadow* _NapContactShadow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::NapContactShadow* DAHPMEGEJFD(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::NapContactShadow*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_DAHPMEGEJFD_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
