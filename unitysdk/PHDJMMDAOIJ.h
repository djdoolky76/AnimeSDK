#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHDJMMDAOIJ_LLJGJMGHKAL.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define PHDJMMDAOIJ_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16FCCAB0)
#define PHDJMMDAOIJ_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x16FCB180)
#define PHDJMMDAOIJ_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x16FCCAC0)
#define PHDJMMDAOIJ_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x16FCB460)
#define PHDJMMDAOIJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16FCB2F0)
#define PHDJMMDAOIJ_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16FCCAD0)
#define PHDJMMDAOIJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16FCC040)
#define PHDJMMDAOIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCCAA0)

inline static constexpr unsigned int PHDJMMDAOIJ_TypeDefinitionIndex = 44475;

class PHDJMMDAOIJ
{
public:
	::UnityEngine::NAPRenderPipeline0::TextureCurve* CLBMOIINLPG; // 0x38
	::UnityEngine::NAPRenderPipeline0::TextureCurve* JDOIEMHNJCK; // 0x40
	::UnityEngine::NAPRenderPipeline0::TextureCurve* FIKCOCNCDNE; // 0x48
	::UnityEngine::NAPRenderPipeline0::TextureCurve* OJLOOHCEOJF; // 0x50
	::UnityEngine::NAPRenderPipeline0::TextureCurve* LPLBHAKJKHH; // 0x58
	::UnityEngine::NAPRenderPipeline0::TextureCurve* MNMFHAOPAKC; // 0x60
	::UnityEngine::NAPRenderPipeline0::TextureCurve* KMABKCIJKFP; // 0x68
	::PHDJMMDAOIJ_LLJGJMGHKAL IJMHNGFLIKI; // 0x70
	::UnityEngine::NAPRenderPipeline0::TextureCurve* KJJDBCJCEFP; // 0xF8
	::System::Boolean JIKHCJIIMMJ; // 0x100
	::System::Boolean OAIBAMNLNKG; // 0x101
	::System::Boolean EBHIGPIMEMH; // 0x102
	::System::Boolean CDPIKBAEBNF; // 0x103
	::System::Boolean OHPENOFHBDL; // 0x104
	::System::Boolean MOLFMEDHMJF; // 0x105
	::System::Boolean GLHPOCBHPFA; // 0x106
	::System::Boolean NBPCNLIKFPF; // 0x107
	::System::Boolean MHPABKFDIOI; // 0x108
	::System::Boolean KANBGLEGNBK; // 0x109

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDJMMDAOIJ_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
