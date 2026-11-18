#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BIFFDPHGHKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1867CCE0)
#define BIFFDPHGHKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1867CC50)
#define BIFFDPHGHKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1867CA70)
#define BIFFDPHGHKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1867CCD0)

inline static constexpr unsigned int BIFFDPHGHKM_TypeDefinitionIndex = 46909;

class BIFFDPHGHKM : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LGLAODPABIL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ADFDBHFPGDO; // 0x28
	::ADEJAGFCBHK* OEBDIGKIGCH; // 0x30
	::UnityEngine::GameObject* LJKMPDJBOFP; // 0x38
	::FGCOIBFFCHB* KAPIIGNLBDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFFDPHGHKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFFDPHGHKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFFDPHGHKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFFDPHGHKM_KGEBDLGBGNM_OFFSET))(this);
	}
};
