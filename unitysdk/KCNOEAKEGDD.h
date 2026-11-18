#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KCNOEAKEGDD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1860A740)
#define KCNOEAKEGDD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1860A670)
#define KCNOEAKEGDD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1860A4C0)
#define KCNOEAKEGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1860A730)

inline static constexpr unsigned int KCNOEAKEGDD_TypeDefinitionIndex = 56251;

class KCNOEAKEGDD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DCDNEMMDAHE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KBGIAIHCEPL; // 0x28
	::UnityEngine::GameObject* FIOPMNMJBCG; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNOEAKEGDD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCNOEAKEGDD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNOEAKEGDD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCNOEAKEGDD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
