#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LFDGDONLMLD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1998A1F0)
#define LFDGDONLMLD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1998A140)
#define LFDGDONLMLD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19989F30)
#define LFDGDONLMLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1998A1E0)

inline static constexpr unsigned int LFDGDONLMLD_TypeDefinitionIndex = 71466;

class LFDGDONLMLD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FKKFDIACHKN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x30
	::UnityEngine::GameObject* COEGDCPBBAB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x40
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x48
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGDONLMLD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFDGDONLMLD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFDGDONLMLD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGDONLMLD_KGEBDLGBGNM_OFFSET))(this);
	}
};
