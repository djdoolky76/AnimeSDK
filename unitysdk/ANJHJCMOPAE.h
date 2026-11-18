#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIUrbanMapEyePanelWidgetItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define ANJHJCMOPAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x142300A0)
#define ANJHJCMOPAE_JFPCMNDEMLL_OFFSET UNITYSDK_OFFSET(0x1422FE70)
#define ANJHJCMOPAE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14230050)
#define ANJHJCMOPAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1422FD20)
#define ANJHJCMOPAE__CTOR_OFFSET UNITYSDK_OFFSET(0x14230090)

inline static constexpr unsigned int ANJHJCMOPAE_TypeDefinitionIndex = 54013;

class ANJHJCMOPAE : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIUrbanMapEyePanelWidgetItemWidgetController*>*>* MNMLMBIIKML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJHJCMOPAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANJHJCMOPAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJHJCMOPAE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANJHJCMOPAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIUrbanMapEyePanelWidgetItemWidgetController*>*>* JFPCMNDEMLL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIUrbanMapEyePanelWidgetItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANJHJCMOPAE_JFPCMNDEMLL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
