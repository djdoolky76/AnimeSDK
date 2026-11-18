#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GEHFEDMEKNA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18133CF0)
#define GEHFEDMEKNA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18133BE0)
#define GEHFEDMEKNA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18133960)
#define GEHFEDMEKNA__CTOR_OFFSET UNITYSDK_OFFSET(0x18133CE0)

inline static constexpr unsigned int GEHFEDMEKNA_TypeDefinitionIndex = 60331;

class GEHFEDMEKNA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* KKBGCJJDFCL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NJJDMPFFMNB; // 0x20
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x38
	::FGCOIBFFCHB* BKMLOHKAEHO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AFJNGMDKOFM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* OJDJDFDOEBE; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EGCLKHPGJHI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ALBMIGPNKOC; // 0x60
	::FGCOIBFFCHB* JFKFAKGMOLC; // 0x68
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHFEDMEKNA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEHFEDMEKNA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEHFEDMEKNA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHFEDMEKNA_KGEBDLGBGNM_OFFSET))(this);
	}
};
