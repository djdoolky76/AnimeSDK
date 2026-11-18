#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GGEMDIACFAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x189FD6A0)
#define GGEMDIACFAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x189FD610)
#define GGEMDIACFAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x189FD440)
#define GGEMDIACFAN__CTOR_OFFSET UNITYSDK_OFFSET(0x189FD690)

inline static constexpr unsigned int GGEMDIACFAN_TypeDefinitionIndex = 87715;

class GGEMDIACFAN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* MBKACMJJMBH; // 0x18
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28
	::GCIMMDDIFBJ* MCHBBPJHNCK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGEMDIACFAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGEMDIACFAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGEMDIACFAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGEMDIACFAN_KGEBDLGBGNM_OFFSET))(this);
	}
};
