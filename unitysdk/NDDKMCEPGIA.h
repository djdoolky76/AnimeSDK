#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDDKMCEPGIA_EFGHIHHNEPL.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define NDDKMCEPGIA_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0xE733610)
#define NDDKMCEPGIA_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0xE732A00)
#define NDDKMCEPGIA_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0xE733630)
#define NDDKMCEPGIA_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0xE732B30)
#define NDDKMCEPGIA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE732A90)
#define NDDKMCEPGIA_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0xE733620)
#define NDDKMCEPGIA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE732FD0)
#define NDDKMCEPGIA__CTOR_OFFSET UNITYSDK_OFFSET(0xE7335F0)

inline static constexpr unsigned int NDDKMCEPGIA_TypeDefinitionIndex = 69712;

class NDDKMCEPGIA
{
public:
	::UnityEngine::Texture* HJPGOMCLLDG; // 0x38
	::NDDKMCEPGIA_EFGHIHHNEPL IJMHNGFLIKI; // 0x40
	::System::Single PINPFNGEKPJ; // 0x60
	::System::Boolean CDPIKBAEBNF; // 0x64
	::System::Boolean LBDHMIKEACF; // 0x65
	::System::Boolean IOAEMDDAJLP; // 0x66
	::System::Boolean MHPABKFDIOI; // 0x67

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDKMCEPGIA__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDDKMCEPGIA_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
