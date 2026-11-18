#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALGMBFIKEAP_FIOBNMALHIK.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define ALGMBFIKEAP_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16D8F5E0)
#define ALGMBFIKEAP_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x16D8DFC0)
#define ALGMBFIKEAP_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x16D8F5D0)
#define ALGMBFIKEAP_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x16D8E240)
#define ALGMBFIKEAP_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16D8E110)
#define ALGMBFIKEAP_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16D8F5F0)
#define ALGMBFIKEAP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16D8ECC0)
#define ALGMBFIKEAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8F5A0)

inline static constexpr unsigned int ALGMBFIKEAP_TypeDefinitionIndex = 66655;

class ALGMBFIKEAP
{
public:
	::System::Single KCJGMBDLKCE; // 0x38
	::System::Single APGJHNOEMPB; // 0x3C
	::System::Boolean PDKGFINOPJC; // 0x40
	::System::Boolean CDPIKBAEBNF; // 0x41
	::System::Boolean NFAGGHMMEPL; // 0x42
	::System::Boolean LMIDGJDKCHC; // 0x43
	::System::Single FBFOIJHDOPI; // 0x44
	::System::Single FCLIBLJFBHF; // 0x48
	::UnityEngine::NAPRenderPipeline0::TonemappingMode EJHGOKAMACC; // 0x4C
	::System::Single GOGKDKBOEMC; // 0x50
	::System::Boolean MHPABKFDIOI; // 0x54
	::System::Boolean IFEHHBMLBBB; // 0x55
	::System::Byte _padding0[0x2];
	::ALGMBFIKEAP_FIOBNMALHIK IJMHNGFLIKI; // 0x58
	::System::Boolean CMGKCFNDIBL; // 0x94
	::System::Boolean IJJENMDEGHD; // 0x95
	::System::Boolean LFHFAAOMHAN; // 0x96
	::System::Byte _padding1[0x1];
	::System::Single DKLEOJBLHCL; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMBFIKEAP__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ALGMBFIKEAP_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
