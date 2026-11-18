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

#define FAIBGOJIDHJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17134200)
#define FAIBGOJIDHJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17134170)
#define FAIBGOJIDHJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17133F50)
#define FAIBGOJIDHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x171341F0)

inline static constexpr unsigned int FAIBGOJIDHJ_TypeDefinitionIndex = 83563;

class FAIBGOJIDHJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PEFNEBEDKBH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::GCIMMDDIFBJ* HBPKCNJFOPC; // 0x28
	::MoleMole::MonoInputKey* ENKOLDOMCNA; // 0x30
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x38
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x40
	::UnityEngine::RectTransform* JFHCMCCHFCK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JEDGGJKBMMG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIBGOJIDHJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAIBGOJIDHJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIBGOJIDHJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAIBGOJIDHJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
