#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VignetteBehaviour_MMFKILBKFGD.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15AEE310)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15AEF940)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x15AEF930)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_KPFAPJPAKCL_OFFSET UNITYSDK_OFFSET(0x15AEE570)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15AEEA30)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x15AEF950)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15AEE960)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15AEF960)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15AEF370)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15AEF550)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEF8F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VignetteBehaviour_TypeDefinitionIndex = 71396;

	class VignetteBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VignetteBehaviour_MMFKILBKFGD _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_color; // 0x51
		::System::Boolean use_color; // 0x52
		::System::Byte _padding0[0x1];
		::UnityEngine::Color color; // 0x54
		::System::Boolean active_center; // 0x64
		::System::Boolean use_center; // 0x65
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector2 center; // 0x68
		::System::Boolean active_intensity; // 0x70
		::System::Boolean use_intensity; // 0x71
		::System::Byte _padding2[0x2];
		::System::Single intensity; // 0x74
		::System::Boolean active_smoothness; // 0x78
		::System::Boolean use_smoothness; // 0x79
		::System::Byte _padding3[0x2];
		::System::Single smoothness; // 0x7C
		::System::Boolean active_rounded; // 0x80
		::System::Boolean use_rounded; // 0x81
		::System::Boolean rounded; // 0x82
		::System::Byte _padding4[0x5];
		::UnityEngine::Rendering::Universal::Vignette* _Vignette; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::Vignette* KPFAPJPAKCL(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::Vignette*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_KPFAPJPAKCL_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
