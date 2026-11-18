#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FNIIDKOMAFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x20034970)
#define FNIIDKOMAFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x20034880)
#define FNIIDKOMAFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x20034630)
#define FNIIDKOMAFP__CTOR_OFFSET UNITYSDK_OFFSET(0x20034960)

inline static constexpr unsigned int FNIIDKOMAFP_TypeDefinitionIndex = 96503;

class FNIIDKOMAFP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JFEOCECFCGA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HIMIJIGKDPC; // 0x20
	::FGCOIBFFCHB* DAGCDFAIHAN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PINIDEDDLOL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OFPNEDLGPJK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GBIHHHOPBIM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JMMFDMHGFJM; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* LFMINJIDDPM; // 0x58
	::UnityEngine::GameObject* ICKNPABEDEE; // 0x60
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* ABGOLJIBADK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIIDKOMAFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNIIDKOMAFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNIIDKOMAFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIIDKOMAFP_KGEBDLGBGNM_OFFSET))(this);
	}
};
