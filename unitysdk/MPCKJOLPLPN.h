#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MPCKJOLPLPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A30210)
#define MPCKJOLPLPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A30140)
#define MPCKJOLPLPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A2FF90)
#define MPCKJOLPLPN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A30200)

inline static constexpr unsigned int MPCKJOLPLPN_TypeDefinitionIndex = 79452;

class MPCKJOLPLPN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x20
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x28
	::UnityEngine::Animation* BGAAIKGMOMO; // 0x30
	::UnityEngine::GameObject* GJJKEOLNAJG; // 0x38
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKJOLPLPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPCKJOLPLPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKJOLPLPN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPCKJOLPLPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
