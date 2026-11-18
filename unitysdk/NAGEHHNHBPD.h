#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAGEHHNHBPD_HAKEDEGJCEL.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define NAGEHHNHBPD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x18F8D090)
#define NAGEHHNHBPD_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x18F8B9C0)
#define NAGEHHNHBPD_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x18F8D0A0)
#define NAGEHHNHBPD_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18F8BC20)
#define NAGEHHNHBPD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18F8BB10)
#define NAGEHHNHBPD_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18F8D0B0)
#define NAGEHHNHBPD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18F8C790)
#define NAGEHHNHBPD__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8D050)

inline static constexpr unsigned int NAGEHHNHBPD_TypeDefinitionIndex = 91159;

class NAGEHHNHBPD
{
public:
	::NAGEHHNHBPD_HAKEDEGJCEL IJMHNGFLIKI; // 0x38
	::System::Single OCIANCLMDKO; // 0x68
	::System::Single ENBEMMOGELH; // 0x6C
	::System::Boolean MALBJBIGAIN; // 0x70
	::System::Boolean DLNGBGIENBF; // 0x71
	::System::Boolean CDPIKBAEBNF; // 0x72
	::System::Boolean ECONKEJKLFC; // 0x73
	::System::Boolean BMKCNIPBLDG; // 0x74
	::System::Boolean LOAOJHAPICG; // 0x75
	::System::Boolean EMHAINCELOP; // 0x76
	::System::Byte _padding0[0x1];
	::System::Single EAAKKFJFOAI; // 0x78
	::System::Single CHLLOFEEEBJ; // 0x7C
	::UnityEngine::NAPRenderPipeline0::SsrQuality MMFKEEIGJAN; // 0x80
	::System::Boolean HBFLALCKPAK; // 0x84
	::System::Boolean MHPABKFDIOI; // 0x85
	::System::Boolean OGHPOADIING; // 0x86
	::System::Boolean NEACJJHOPML; // 0x87

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGEHHNHBPD__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NAGEHHNHBPD_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
