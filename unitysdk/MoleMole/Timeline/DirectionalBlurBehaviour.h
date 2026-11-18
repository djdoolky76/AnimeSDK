#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DirectionalBlurBehaviour_CIGGAOPALFC.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x189693F0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_FIHPHAKFKNM_OFFSET UNITYSDK_OFFSET(0x18969630)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1896A950)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1896A970)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18969AE0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1896A980)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18969A20)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1896A960)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1896A400)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1896A5D0)
#define MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1896A910)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DirectionalBlurBehaviour_TypeDefinitionIndex = 68577;

	class DirectionalBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DirectionalBlurBehaviour_CIGGAOPALFC _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_downSample; // 0x49
		::System::Boolean use_downSample; // 0x4A
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0x4C
		::System::Boolean active_sampleDistanceMode; // 0x50
		::System::Boolean use_sampleDistanceMode; // 0x51
		::System::Byte _padding1[0x2];
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0x54
		::System::Boolean active_sampleCount; // 0x58
		::System::Boolean use_sampleCount; // 0x59
		::System::Byte _padding2[0x2];
		::System::Int32 sampleCount; // 0x5C
		::System::Boolean active_radius; // 0x60
		::System::Boolean use_radius; // 0x61
		::System::Byte _padding3[0x2];
		::System::Single radius; // 0x64
		::System::Boolean active_direction; // 0x68
		::System::Boolean use_direction; // 0x69
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector2 direction; // 0x6C
		::System::Byte _padding5[0x4];
		::UnityEngine::Rendering::Universal::DirectionalBlur* _DirectionalBlur; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::DirectionalBlur* FIHPHAKFKNM(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::DirectionalBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_FIHPHAKFKNM_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIRECTIONALBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
