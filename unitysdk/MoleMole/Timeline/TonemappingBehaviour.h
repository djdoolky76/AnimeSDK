#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/TonemappingBehaviour_FMPGMMNEFMB.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A0B75E0)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A0B8D30)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A0B8D20)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_LBNKPKHHKMC_OFFSET UNITYSDK_OFFSET(0x1A0B7870)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A0B7D50)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A0B8D40)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0B7C60)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0B8D50)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A0B8740)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0B8950)
#define MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B8CF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TonemappingBehaviour_TypeDefinitionIndex = 45024;

	class TonemappingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::TonemappingBehaviour_FMPGMMNEFMB _methodParm; // 0x18
		::System::Boolean enabled; // 0x54
		::System::Boolean active_mode; // 0x55
		::System::Boolean use_mode; // 0x56
		::System::Byte _padding0[0x1];
		::UnityEngine::NAPRenderPipeline0::TonemappingMode mode; // 0x58
		::System::Boolean active_toeStrength; // 0x5C
		::System::Boolean use_toeStrength; // 0x5D
		::System::Byte _padding1[0x2];
		::System::Single toeStrength; // 0x60
		::System::Boolean active_toeLength; // 0x64
		::System::Boolean use_toeLength; // 0x65
		::System::Byte _padding2[0x2];
		::System::Single toeLength; // 0x68
		::System::Boolean active_shoulderStrength; // 0x6C
		::System::Boolean use_shoulderStrength; // 0x6D
		::System::Byte _padding3[0x2];
		::System::Single shoulderStrength; // 0x70
		::System::Boolean active_shoulderLength; // 0x74
		::System::Boolean use_shoulderLength; // 0x75
		::System::Byte _padding4[0x2];
		::System::Single shoulderLength; // 0x78
		::System::Boolean active_shoulderAngle; // 0x7C
		::System::Boolean use_shoulderAngle; // 0x7D
		::System::Byte _padding5[0x2];
		::System::Single shoulderAngle; // 0x80
		::System::Boolean active_customGamma; // 0x84
		::System::Boolean use_customGamma; // 0x85
		::System::Byte _padding6[0x2];
		::System::Single customGamma; // 0x88
		::System::Byte _padding7[0x4];
		::UnityEngine::Rendering::Universal::Tonemapping* _Tonemapping; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::Tonemapping* LBNKPKHHKMC(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::Tonemapping*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_LBNKPKHHKMC_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TONEMAPPINGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
