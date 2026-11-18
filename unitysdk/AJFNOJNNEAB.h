#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AJFNOJNNEAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17CD55A0)
#define AJFNOJNNEAB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17CD5510)
#define AJFNOJNNEAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17CD52E0)
#define AJFNOJNNEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD5590)

inline static constexpr unsigned int AJFNOJNNEAB_TypeDefinitionIndex = 44900;

class AJFNOJNNEAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JEDGGJKBMMG; // 0x18
	::UnityEngine::Transform* KBJOGOBDOON; // 0x20
	::GCIMMDDIFBJ* HBPKCNJFOPC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::MoleMole::MonoInputKey* ENKOLDOMCNA; // 0x48
	::UnityEngine::RectTransform* JFHCMCCHFCK; // 0x50
	::UnityEngine::Transform* PEFNEBEDKBH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFNOJNNEAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJFNOJNNEAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJFNOJNNEAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFNOJNNEAB_KGEBDLGBGNM_OFFSET))(this);
	}
};
