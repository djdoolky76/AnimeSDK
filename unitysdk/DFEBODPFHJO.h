#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFEBODPFHJO_GAKNONMDMII.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define DFEBODPFHJO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x7F71380)
#define DFEBODPFHJO_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x7F6FA20)
#define DFEBODPFHJO_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x7F71390)
#define DFEBODPFHJO_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x7F6FCB0)
#define DFEBODPFHJO_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7F6FB80)
#define DFEBODPFHJO_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x7F713A0)
#define DFEBODPFHJO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7F709F0)
#define DFEBODPFHJO__CTOR_OFFSET UNITYSDK_OFFSET(0x7F71350)

inline static constexpr unsigned int DFEBODPFHJO_TypeDefinitionIndex = 73573;

class DFEBODPFHJO
{
public:
	::System::Boolean HNFFKPFAPEF; // 0x38
	::System::Boolean EIMPNCGKABB; // 0x39
	::System::Boolean PPMPKCNNKEJ; // 0x3A
	::System::Boolean MHPABKFDIOI; // 0x3B
	::System::Boolean HBFLALCKPAK; // 0x3C
	::System::Boolean LDCPFAJHDII; // 0x3D
	::System::Boolean CDPIKBAEBNF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Single OCIANCLMDKO; // 0x40
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType NMDIANNONMG; // 0x44
	::System::Int32 JBCIOEGIBMO; // 0x48
	::DFEBODPFHJO_GAKNONMDMII IJMHNGFLIKI; // 0x4C
	::System::Boolean JBDLBGEBCPB; // 0x88
	::System::Boolean JFLOCPFEPGI; // 0x89
	::System::Boolean ELCHKBKCLOL; // 0x8A
	::System::Boolean DDHIINKMEJP; // 0x8B
	::System::Single HNCJIKKGPEE; // 0x8C
	::UnityEngine::Vector3 KHALLPCLHEM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBODPFHJO__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBODPFHJO_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DFEBODPFHJO_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DFEBODPFHJO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DFEBODPFHJO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBODPFHJO_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DFEBODPFHJO_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEBODPFHJO_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
