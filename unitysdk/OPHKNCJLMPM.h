#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UICommonTimeCoolDownWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define OPHKNCJLMPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18459A10)
#define OPHKNCJLMPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18459960)
#define OPHKNCJLMPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18459710)
#define OPHKNCJLMPM__CTOR_OFFSET UNITYSDK_OFFSET(0x18459A00)

inline static constexpr unsigned int OPHKNCJLMPM_TypeDefinitionIndex = 58760;

class OPHKNCJLMPM : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* KMPIDMGPFIH; // 0x18
	::UnityEngine::GameObject* KMKFIKNCAJO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UICommonTimeCoolDownWidgetController*>* LCIIKHBECOM; // 0x30
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x38
	::FGCOIBFFCHB* HLJMMLMNFDG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x48
	::UnityEngine::GameObject* PGCFKHKBDMC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHKNCJLMPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPHKNCJLMPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHKNCJLMPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPHKNCJLMPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
