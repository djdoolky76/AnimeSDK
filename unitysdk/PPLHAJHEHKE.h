#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PPLHAJHEHKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D63A8D0)
#define PPLHAJHEHKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D63A840)
#define PPLHAJHEHKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D63A640)
#define PPLHAJHEHKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63A8C0)

inline static constexpr unsigned int PPLHAJHEHKE_TypeDefinitionIndex = 87286;

class PPLHAJHEHKE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoInputKey* GCOEMIMAGJG; // 0x18
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x20
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x38
	::UnityEngine::RectTransform* KKHENFOHJCI; // 0x40
	::GCIMMDDIFBJ* OFPHKHEKPBO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLHAJHEHKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPLHAJHEHKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPLHAJHEHKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLHAJHEHKE_KGEBDLGBGNM_OFFSET))(this);
	}
};
