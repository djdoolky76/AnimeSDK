#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define HBCONLMNPPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17E2B280)
#define HBCONLMNPPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17E2B190)
#define HBCONLMNPPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17E2AFC0)
#define HBCONLMNPPF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2B270)

inline static constexpr unsigned int HBCONLMNPPF_TypeDefinitionIndex = 54189;

class HBCONLMNPPF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* JCOHAGKLDIC; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCONLMNPPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBCONLMNPPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCONLMNPPF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBCONLMNPPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
