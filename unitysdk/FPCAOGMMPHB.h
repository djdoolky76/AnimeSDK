#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FPCAOGMMPHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D92290)
#define FPCAOGMMPHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11D921C0)
#define FPCAOGMMPHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D92020)
#define FPCAOGMMPHB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D92280)

inline static constexpr unsigned int FPCAOGMMPHB_TypeDefinitionIndex = 73401;

class FPCAOGMMPHB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OADGFMJHHKC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x30
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCAOGMMPHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPCAOGMMPHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPCAOGMMPHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCAOGMMPHB_KGEBDLGBGNM_OFFSET))(this);
	}
};
