#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNBKBLJDCIG_LDJKFCIBMDE.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define LNBKBLJDCIG_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15E0AB60)
#define LNBKBLJDCIG_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x15E09750)
#define LNBKBLJDCIG_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x15E0AB40)
#define LNBKBLJDCIG_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15E09960)
#define LNBKBLJDCIG_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15E09860)
#define LNBKBLJDCIG_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15E0AB50)
#define LNBKBLJDCIG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15E0A2C0)
#define LNBKBLJDCIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0AB10)

inline static constexpr unsigned int LNBKBLJDCIG_TypeDefinitionIndex = 64148;

class LNBKBLJDCIG
{
public:
	::System::Boolean CDPIKBAEBNF; // 0x38
	::System::Boolean DDMOLGLFDEP; // 0x39
	::System::Boolean MHPABKFDIOI; // 0x3A
	::System::Boolean DOIDDIPNMHH; // 0x3B
	::System::Boolean NHLMONOLJJC; // 0x3C
	::System::Boolean LMIDGJDKCHC; // 0x3D
	::System::Boolean EMHAINCELOP; // 0x3E
	::System::Boolean HBFLALCKPAK; // 0x3F
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection JKNBCNNGHCC; // 0x40
	::System::Single MGDLGFJBGEO; // 0x44
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode EJHGOKAMACC; // 0x48
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality MMFKEEIGJAN; // 0x4C
	::System::Single LMDEENLBHGC; // 0x50
	::System::Single OCIANCLMDKO; // 0x54
	::LNBKBLJDCIG_LDJKFCIBMDE IJMHNGFLIKI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBKBLJDCIG__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNBKBLJDCIG_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
