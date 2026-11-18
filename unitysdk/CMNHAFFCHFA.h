#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CMNHAFFCHFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E14630)
#define CMNHAFFCHFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E144F0)
#define CMNHAFFCHFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E14620)

inline static constexpr unsigned int CMNHAFFCHFA_TypeDefinitionIndex = 82588;

class CMNHAFFCHFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GNINBCJHPBM; // 0x18
	::UnityEngine::GameObject* EJAMLGKCJED; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NMBFIFKHLEM; // 0x38
	::UnityEngine::GameObject* MMMNNMPBJMI; // 0x40
	::UnityEngine::Animation* EMAHGABCBJO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNHAFFCHFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMNHAFFCHFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMNHAFFCHFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
