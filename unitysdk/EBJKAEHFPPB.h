#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBJKAEHFPPB_DCEEAKOMLEI_OFFSET UNITYSDK_OFFSET(0x10F1C660)
#define EBJKAEHFPPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F1C880)
#define EBJKAEHFPPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F1C7B0)
#define EBJKAEHFPPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F1C470)
#define EBJKAEHFPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1C870)

inline static constexpr unsigned int EBJKAEHFPPB_TypeDefinitionIndex = 60481;

class EBJKAEHFPPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BGNNOCFHBCF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* NGIPLFEEJJA; // 0x28
	::UnityEngine::RectTransform* FNOMNFBJDKE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OAKNODKILCN; // 0x38
	::UnityEngine::GameObject* CHODACHAHOC; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x48
	::LGINJIKKBJA* LHMBNKHLAIJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJKAEHFPPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBJKAEHFPPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* DCEEAKOMLEI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBJKAEHFPPB_DCEEAKOMLEI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJKAEHFPPB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBJKAEHFPPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
