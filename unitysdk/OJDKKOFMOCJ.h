#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJDKKOFMOCJ_IGEOLEFEFMN.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define OJDKKOFMOCJ_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15FE4370)
#define OJDKKOFMOCJ_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x15FE3750)
#define OJDKKOFMOCJ_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x15FE4350)
#define OJDKKOFMOCJ_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15FE3880)
#define OJDKKOFMOCJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15FE37E0)
#define OJDKKOFMOCJ_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15FE4360)
#define OJDKKOFMOCJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15FE3D20)
#define OJDKKOFMOCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE4330)

inline static constexpr unsigned int OJDKKOFMOCJ_TypeDefinitionIndex = 77237;

class OJDKKOFMOCJ
{
public:
	::OJDKKOFMOCJ_IGEOLEFEFMN IJMHNGFLIKI; // 0x38
	::System::Single HKBKCBKJPOM; // 0x4C
	::System::Boolean IKPEOEBEIAF; // 0x50
	::System::Boolean CDPIKBAEBNF; // 0x51
	::System::Boolean MHPABKFDIOI; // 0x52
	::System::Boolean MDOIPDLLBLJ; // 0x53
	::System::Single EIPGIKGHFKM; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJDKKOFMOCJ_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
