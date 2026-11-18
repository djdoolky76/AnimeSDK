#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLJAHDIDKBL_BAIJLPMHOAO.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define HLJAHDIDKBL_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x17A5C480)
#define HLJAHDIDKBL_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x17A5A1A0)
#define HLJAHDIDKBL_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x17A5C470)
#define HLJAHDIDKBL_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x17A5A5E0)
#define HLJAHDIDKBL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17A5A420)
#define HLJAHDIDKBL_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x17A5C460)
#define HLJAHDIDKBL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17A5B720)
#define HLJAHDIDKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5C420)

inline static constexpr unsigned int HLJAHDIDKBL_TypeDefinitionIndex = 56544;

class HLJAHDIDKBL
{
public:
	::System::Boolean PGPEBHHMKKK; // 0x38
	::System::Boolean EKCGPEFENLP; // 0x39
	::System::Boolean LIPDAIMFEFF; // 0x3A
	::System::Boolean BMALPGKOGOB; // 0x3B
	::System::Single CHLLOFEEEBJ; // 0x3C
	::System::Single LEGCHKFCOMJ; // 0x40
	::System::Boolean CDPIKBAEBNF; // 0x44
	::System::Boolean CJPNMCPEBPJ; // 0x45
	::System::Boolean HHJGGEDLFDB; // 0x46
	::System::Boolean NEACJJHOPML; // 0x47
	::System::Single IMEGIMIJPBO; // 0x48
	::System::Single FNFGHMOBMLH; // 0x4C
	::HLJAHDIDKBL_BAIJLPMHOAO IJMHNGFLIKI; // 0x50
	::System::Single JFKOEPFNDNC; // 0xA8
	::System::Single MBEFPNAMGGC; // 0xAC
	::UnityEngine::LayerMask ALDPKKEJCJD; // 0xB0
	::UnityEngine::LayerMask EOKDPMHGDJK; // 0xB4
	::System::Single JNFIIPNCAFF; // 0xB8
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask GAJLLKIFEKM; // 0xBC
	::System::Boolean HHNPLDKEFBB; // 0xC0
	::System::Boolean HOEGBNEKNPL; // 0xC1
	::System::Boolean PJBFPCCMGEI; // 0xC2
	::System::Boolean EMCIEKGHCPC; // 0xC3
	::System::Boolean KMGHLKEMMEG; // 0xC4
	::System::Boolean DKKLNOKNLCK; // 0xC5
	::System::Boolean DLPGPGCGKBJ; // 0xC6
	::System::Boolean MHPABKFDIOI; // 0xC7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJAHDIDKBL__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HLJAHDIDKBL_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
