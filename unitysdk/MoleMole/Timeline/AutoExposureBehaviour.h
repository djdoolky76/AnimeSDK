#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoExposureBehaviour_DNOLIJDDBFC.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A0994D0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_FLJJDLDKNJP_OFFSET UNITYSDK_OFFSET(0x1A099790)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A09ABE0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A09ABD0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A099C60)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A09ABF0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A099B80)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A09ABC0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A09A5F0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A09A7E0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09AB80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AutoExposureBehaviour_TypeDefinitionIndex = 58129;

	class AutoExposureBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::AutoExposureBehaviour_DNOLIJDDBFC _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_Filtering; // 0x51
		::System::Boolean use_Filtering; // 0x52
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector2 Filtering; // 0x54
		::System::Boolean active_LuminanceRange; // 0x5C
		::System::Boolean use_LuminanceRange; // 0x5D
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector2 LuminanceRange; // 0x60
		::System::Boolean active_ExposureCompensation; // 0x68
		::System::Boolean use_ExposureCompensation; // 0x69
		::System::Byte _padding2[0x2];
		::System::Single ExposureCompensation; // 0x6C
		::System::Boolean active_ProgressiveEyeAdaptation; // 0x70
		::System::Boolean use_ProgressiveEyeAdaptation; // 0x71
		::System::Boolean ProgressiveEyeAdaptation; // 0x72
		::System::Boolean active_SpeedUp; // 0x73
		::System::Boolean use_SpeedUp; // 0x74
		::System::Byte _padding3[0x3];
		::System::Single SpeedUp; // 0x78
		::System::Boolean active_SpeedDown; // 0x7C
		::System::Boolean use_SpeedDown; // 0x7D
		::System::Byte _padding4[0x2];
		::System::Single SpeedDown; // 0x80
		::System::Byte _padding5[0x4];
		::UnityEngine::Rendering::Universal::AutoExposure* _AutoExposure; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::AutoExposure* FLJJDLDKNJP(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::AutoExposure*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_FLJJDLDKNJP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
