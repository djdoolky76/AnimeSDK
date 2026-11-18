#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CMJBDCPKCKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193E8490)
#define CMJBDCPKCKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x193E8400)
#define CMJBDCPKCKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193E8220)
#define CMJBDCPKCKP__CTOR_OFFSET UNITYSDK_OFFSET(0x193E8480)

inline static constexpr unsigned int CMJBDCPKCKP_TypeDefinitionIndex = 44027;

class CMJBDCPKCKP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JHLNILOJCCC; // 0x18
	::UnityEngine::GameObject* OBEMLOACGAF; // 0x20
	::UnityEngine::RectTransform* FGMKDEBCOPE; // 0x28
	::UnityEngine::GameObject* NDBMEFPLINN; // 0x30
	::UnityEngine::GameObject* GJFKDEHNOFK; // 0x38
	::UnityEngine::GameObject* LEOOKNIKODP; // 0x40
	::UnityEngine::GameObject* GHAJPGIDPHA; // 0x48
	::UnityEngine::RectTransform* ANGPKICFBIF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJBDCPKCKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMJBDCPKCKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJBDCPKCKP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMJBDCPKCKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
