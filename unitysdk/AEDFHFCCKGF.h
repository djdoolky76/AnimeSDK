#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AEDFHFCCKGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17DC4E00)
#define AEDFHFCCKGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17DC4D50)
#define AEDFHFCCKGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17DC4AC0)
#define AEDFHFCCKGF__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC4DF0)

inline static constexpr unsigned int AEDFHFCCKGF_TypeDefinitionIndex = 84754;

class AEDFHFCCKGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JHJKBJLJLPC; // 0x18
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ADELJCEIPDB; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* APOLCPNLIDO; // 0x38
	::GCIMMDDIFBJ* LHPKLIFJMIP; // 0x40
	::GCIMMDDIFBJ* GONMBBOGCOI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MFIIMEAIMIK; // 0x50
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x58
	::UnityEngine::RectTransform* PMNNHAFIPJB; // 0x60
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDFHFCCKGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AEDFHFCCKGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDFHFCCKGF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AEDFHFCCKGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
