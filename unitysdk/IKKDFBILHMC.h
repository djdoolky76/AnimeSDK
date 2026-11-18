#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IKKDFBILHMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A286B0)
#define IKKDFBILHMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A28620)
#define IKKDFBILHMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A283E0)
#define IKKDFBILHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A286A0)

inline static constexpr unsigned int IKKDFBILHMC_TypeDefinitionIndex = 53476;

class IKKDFBILHMC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DCPAEHBKAKE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DMKIDFNMHBE; // 0x28
	::LGINJIKKBJA* LKIIFLODLAH; // 0x30
	::UnityEngine::GameObject* CONPMIIPPOP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GGIKNHIPBIC; // 0x40
	::UnityEngine::GameObject* JJICLBPMKAL; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MLIEBCAOLKK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* FICJGDJNICN; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x60
	::UnityEngine::GameObject* OKLLFEIJKHN; // 0x68
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKDFBILHMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKKDFBILHMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKDFBILHMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKKDFBILHMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
