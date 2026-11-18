#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKBNBJFOPKE_OBMMDFIKFNO.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define LKBNBJFOPKE_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x158F3D10)
#define LKBNBJFOPKE_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x158F0960)
#define LKBNBJFOPKE_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x158F3D20)
#define LKBNBJFOPKE_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x158F0F40)
#define LKBNBJFOPKE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x158F0D10)
#define LKBNBJFOPKE_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x158F3D30)
#define LKBNBJFOPKE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x158F2C80)
#define LKBNBJFOPKE__CTOR_OFFSET UNITYSDK_OFFSET(0x158F3CB0)

inline static constexpr unsigned int LKBNBJFOPKE_TypeDefinitionIndex = 60574;

class LKBNBJFOPKE
{
public:
	::System::Boolean JCFKOLMDEEL; // 0x38
	::System::Boolean CGKMJCDAOGF; // 0x39
	::System::Boolean GJKGFIICOHB; // 0x3A
	::System::Boolean KKBONHDNABJ; // 0x3B
	::System::Boolean CBFHKEGEAMB; // 0x3C
	::System::Boolean KHKMLBCIMPB; // 0x3D
	::System::Boolean EAHNBIEOHDB; // 0x3E
	::System::Boolean CDPIKBAEBNF; // 0x3F
	::LKBNBJFOPKE_OBMMDFIKFNO IJMHNGFLIKI; // 0x40
	::System::Single GKBHDGACOJG; // 0xC4
	::UnityEngine::Color IANINOMEJIB; // 0xC8
	::System::Boolean GNKALKNNGNB; // 0xD8
	::System::Boolean GGLPMMCEGMD; // 0xD9
	::System::Boolean MECDLBLKDGA; // 0xDA
	::System::Boolean KHEDEIIHHFJ; // 0xDB
	::System::Boolean FCNKDAICCAD; // 0xDC
	::System::Boolean INMGCKAKMMN; // 0xDD
	::System::Boolean EBHNJDAHIEM; // 0xDE
	::System::Boolean KLIHLDMDLCL; // 0xDF
	::System::Boolean GNPEFFFIFBI; // 0xE0
	::System::Boolean APMKMGDEANL; // 0xE1
	::System::Boolean MHPABKFDIOI; // 0xE2
	::System::Boolean CJOGAHOLMFL; // 0xE3
	::System::Boolean GOIIJIKOFIN; // 0xE4
	::System::Boolean EMJOGHLCOGB; // 0xE5
	::System::Boolean NEMCHFDNPDP; // 0xE6
	::System::Boolean EPIFLBLGGEB; // 0xE7
	::System::Boolean IHNMAKLENPG; // 0xE8
	::System::Boolean CENLDAHEIMI; // 0xE9
	::System::Byte _padding0[0x2];
	::UnityEngine::Color EGBABKJFNHK; // 0xEC
	::UnityEngine::Color HIKAOKHCFMC; // 0xFC
	::UnityEngine::Color JMLLEKBEHMC; // 0x10C
	::System::Boolean FJJJMMKPNIG; // 0x11C
	::System::Boolean OMBGGJGIAGO; // 0x11D
	::System::Boolean OHHCGHANHCF; // 0x11E
	::System::Boolean BMFECKJPBGO; // 0x11F
	::System::Single HHJOGHJCGMK; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBNBJFOPKE__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKBNBJFOPKE_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
