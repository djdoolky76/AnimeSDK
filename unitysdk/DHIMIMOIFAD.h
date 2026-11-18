#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHIMIMOIFAD_BOOFABKIBGO.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define DHIMIMOIFAD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x7FBB200)
#define DHIMIMOIFAD_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x7FB9E70)
#define DHIMIMOIFAD_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x7FBB210)
#define DHIMIMOIFAD_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x7FBA060)
#define DHIMIMOIFAD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7FB9F80)
#define DHIMIMOIFAD_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x7FBB220)
#define DHIMIMOIFAD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7FBA9E0)
#define DHIMIMOIFAD__CTOR_OFFSET UNITYSDK_OFFSET(0x7FBB1D0)

inline static constexpr unsigned int DHIMIMOIFAD_TypeDefinitionIndex = 42291;

class DHIMIMOIFAD
{
public:
	::UnityEngine::Rendering::Universal::SampleDistanceMode HMKLPKCPGOO; // 0x38
	::System::Int32 GOKFLFLFDKD; // 0x3C
	::UnityEngine::Vector2 JKNBCNNGHCC; // 0x40
	::System::Boolean NHLMONOLJJC; // 0x48
	::System::Boolean MHPABKFDIOI; // 0x49
	::System::Boolean LCHNIELKLLA; // 0x4A
	::System::Byte _padding0[0x1];
	::DHIMIMOIFAD_BOOFABKIBGO IJMHNGFLIKI; // 0x4C
	::UnityEngine::Rendering::Universal::DownSampleLevel CCEMMHIKPHE; // 0x7C
	::System::Single GEEMKIKDHLB; // 0x80
	::System::Boolean CDPIKBAEBNF; // 0x84
	::System::Boolean KIOBNIIMMGD; // 0x85
	::System::Boolean DMMJHLMLAAP; // 0x86
	::System::Boolean KEAAIBHCIOO; // 0x87

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIMIMOIFAD__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DHIMIMOIFAD_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
