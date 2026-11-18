#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MLFLGAPLFDD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18B53920)
#define MLFLGAPLFDD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18B53810)
#define MLFLGAPLFDD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18B53610)
#define MLFLGAPLFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B53910)

inline static constexpr unsigned int MLFLGAPLFDD_TypeDefinitionIndex = 60431;

class MLFLGAPLFDD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HFJGFOLKIMA; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CIODPKMJMGE; // 0x30
	::MonoUITableScrollV2* DMEECNMBLNF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KFMCLODMMKD; // 0x40
	::FGCOIBFFCHB* GODPEOFIOMM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFLGAPLFDD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLFLGAPLFDD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLFLGAPLFDD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFLGAPLFDD_KGEBDLGBGNM_OFFSET))(this);
	}
};
