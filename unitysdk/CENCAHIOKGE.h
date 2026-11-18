#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class MonoImageRate; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CENCAHIOKGE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x199FDE20)
#define CENCAHIOKGE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x199FDD90)
#define CENCAHIOKGE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x199FDC10)
#define CENCAHIOKGE__CTOR_OFFSET UNITYSDK_OFFSET(0x199FDE10)

inline static constexpr unsigned int CENCAHIOKGE_TypeDefinitionIndex = 64381;

class CENCAHIOKGE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoImageRate* IJGBDGOFGNK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GCCOFFKNBCK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x28
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENCAHIOKGE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CENCAHIOKGE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CENCAHIOKGE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENCAHIOKGE_KGEBDLGBGNM_OFFSET))(this);
	}
};
