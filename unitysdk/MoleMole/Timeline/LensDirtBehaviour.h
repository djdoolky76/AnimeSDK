#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LensDirtBehaviour_MCDHIKIBJEG.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1C0C2990)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C0C4380)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1C0C43A0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1C0C31D0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_OGOEOPPEKCN_OFFSET UNITYSDK_OFFSET(0x1C0C2CD0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1C0C43B0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0C30C0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C0C4390)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C0C3CD0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C0C3EF0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C4330)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LensDirtBehaviour_TypeDefinitionIndex = 84583;

	class LensDirtBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LensDirtBehaviour_MCDHIKIBJEG _methodParm; // 0x18
		::System::Boolean enabled; // 0x78
		::System::Boolean active_dirtTexture; // 0x79
		::System::Boolean use_dirtTexture; // 0x7A
		::System::Byte _padding0[0x5];
		::UnityEngine::Texture* dirtTexture; // 0x80
		::System::Boolean active_enable; // 0x88
		::System::Boolean use_enable; // 0x89
		::System::Boolean enable; // 0x8A
		::System::Boolean active_intensity; // 0x8B
		::System::Boolean use_intensity; // 0x8C
		::System::Byte _padding1[0x3];
		::System::Single intensity; // 0x90
		::System::Boolean active_dirtTextureScaleOffset; // 0x94
		::System::Boolean use_dirtTextureScaleOffset; // 0x95
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector4 dirtTextureScaleOffset; // 0x98
		::System::Boolean active_dirtTextureOverlay; // 0xA8
		::System::Boolean use_dirtTextureOverlay; // 0xA9
		::System::Byte _padding3[0x6];
		::UnityEngine::Texture* dirtTextureOverlay; // 0xB0
		::System::Boolean active_dirtTextureOverlayScaleOffset; // 0xB8
		::System::Boolean use_dirtTextureOverlayScaleOffset; // 0xB9
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector4 dirtTextureOverlayScaleOffset; // 0xBC
		::System::Boolean active_dirtFlickFrequency; // 0xCC
		::System::Boolean use_dirtFlickFrequency; // 0xCD
		::System::Byte _padding5[0x2];
		::System::Single dirtFlickFrequency; // 0xD0
		::System::Byte _padding6[0x4];
		::UnityEngine::Rendering::Universal::LensDirt* _LensDirt; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::LensDirt* OGOEOPPEKCN(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::LensDirt*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_OGOEOPPEKCN_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
