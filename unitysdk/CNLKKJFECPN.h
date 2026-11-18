#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CNLKKJFECPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x120466A0)
#define CNLKKJFECPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12046560)
#define CNLKKJFECPN__CTOR_OFFSET UNITYSDK_OFFSET(0x12046690)

inline static constexpr unsigned int CNLKKJFECPN_TypeDefinitionIndex = 82492;

class CNLKKJFECPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x18
	::UnityEngine::RectTransform* EJAMLGKCJED; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ODPHGOMCFCI; // 0x28
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* FHCGJKMHAPA; // 0x38
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLKKJFECPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNLKKJFECPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNLKKJFECPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
