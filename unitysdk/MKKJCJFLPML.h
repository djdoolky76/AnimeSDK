#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MKKJCJFLPML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1216EB80)
#define MKKJCJFLPML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1216E9B0)
#define MKKJCJFLPML__CTOR_OFFSET UNITYSDK_OFFSET(0x1216EB70)

inline static constexpr unsigned int MKKJCJFLPML_TypeDefinitionIndex = 67161;

class MKKJCJFLPML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IMMOGMIMCCJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::GameObject* IPKAGMBNBLJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CICOJBABMAM; // 0x30
	::UnityEngine::GameObject* KMKFIKNCAJO; // 0x38
	::UnityEngine::RectTransform* OGANLFEFLCB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* LEKNBFPFPGK; // 0x48
	::UnityEngine::GameObject* JHMJIECHMFA; // 0x50
	::UnityEngine::GameObject* PGCFKHKBDMC; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HFAGIINNEGJ; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x68
	::UnityEngine::GameObject* BPDONKAIKAB; // 0x70
	::UnityEngine::GameObject* OJGDCMFBHAI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKJCJFLPML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKKJCJFLPML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKKJCJFLPML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
