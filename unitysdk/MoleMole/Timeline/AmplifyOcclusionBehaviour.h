#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AmplifyOcclusionBehaviour_KMKBAGMDIJM.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x131228C0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x131255D0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x131255C0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_LBCIOFHMGJF_OFFSET UNITYSDK_OFFSET(0x13122CF0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x131232C0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x131255B0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x131230E0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x131255A0)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13124B40)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13124E40)
#define MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13125500)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AmplifyOcclusionBehaviour_TypeDefinitionIndex = 62240;

	class AmplifyOcclusionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::AmplifyOcclusionBehaviour_KMKBAGMDIJM _methodParm; // 0x18
		::System::Boolean enabled; // 0x94
		::System::Boolean active_intensityMultiOnMobile; // 0x95
		::System::Boolean use_intensityMultiOnMobile; // 0x96
		::System::Byte _padding0[0x1];
		::System::Single intensityMultiOnMobile; // 0x98
		::System::Boolean active_radiusMultiOnMobile; // 0x9C
		::System::Boolean use_radiusMultiOnMobile; // 0x9D
		::System::Byte _padding1[0x2];
		::System::Single radiusMultiOnMobile; // 0xA0
		::System::Boolean active_sampleCount; // 0xA4
		::System::Boolean use_sampleCount; // 0xA5
		::System::Byte _padding2[0x2];
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel sampleCount; // 0xA8
		::System::Boolean active_intensity; // 0xAC
		::System::Boolean use_intensity; // 0xAD
		::System::Byte _padding3[0x2];
		::System::Single intensity; // 0xB0
		::System::Boolean active_tint; // 0xB4
		::System::Boolean use_tint; // 0xB5
		::System::Byte _padding4[0x2];
		::UnityEngine::Color tint; // 0xB8
		::System::Boolean active_radius; // 0xC8
		::System::Boolean use_radius; // 0xC9
		::System::Byte _padding5[0x2];
		::System::Single radius; // 0xCC
		::System::Boolean active_powerExponent; // 0xD0
		::System::Boolean use_powerExponent; // 0xD1
		::System::Byte _padding6[0x2];
		::System::Single powerExponent; // 0xD4
		::System::Boolean active_bias; // 0xD8
		::System::Boolean use_bias; // 0xD9
		::System::Byte _padding7[0x2];
		::System::Single bias; // 0xDC
		::System::Boolean active_thickness; // 0xE0
		::System::Boolean use_thickness; // 0xE1
		::System::Byte _padding8[0x2];
		::System::Single thickness; // 0xE4
		::System::Boolean active_downSample; // 0xE8
		::System::Boolean use_downSample; // 0xE9
		::System::Boolean downSample; // 0xEA
		::System::Boolean active_cacheAware; // 0xEB
		::System::Boolean use_cacheAware; // 0xEC
		::System::Boolean cacheAware; // 0xED
		::System::Boolean active_blurEnabled; // 0xEE
		::System::Boolean use_blurEnabled; // 0xEF
		::System::Boolean blurEnabled; // 0xF0
		::System::Boolean active_blurRadius; // 0xF1
		::System::Boolean use_blurRadius; // 0xF2
		::System::Byte _padding9[0x1];
		::System::Int32 blurRadius; // 0xF4
		::System::Boolean active_blurPasses; // 0xF8
		::System::Boolean use_blurPasses; // 0xF9
		::System::Byte _padding10[0x2];
		::System::Int32 blurPasses; // 0xFC
		::System::Boolean active_blurSharpness; // 0x100
		::System::Boolean use_blurSharpness; // 0x101
		::System::Byte _padding11[0x2];
		::System::Single blurSharpness; // 0x104
		::System::Boolean active_lowSSAOQuality; // 0x108
		::System::Boolean use_lowSSAOQuality; // 0x109
		::System::Boolean lowSSAOQuality; // 0x10A
		::System::Byte _padding12[0x5];
		::UnityEngine::Rendering::Universal::AmplifyOcclusion* _AmplifyOcclusion; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::AmplifyOcclusion* LBCIOFHMGJF(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::AmplifyOcclusion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_LBCIOFHMGJF_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AMPLIFYOCCLUSIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
