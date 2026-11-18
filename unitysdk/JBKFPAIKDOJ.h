#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UICommonRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class CBCLGFEGHLJ_1;

#define JBKFPAIKDOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16AC0CC0)
#define JBKFPAIKDOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16AC0C70)
#define JBKFPAIKDOJ_LDJFJOJNCPL_OFFSET UNITYSDK_OFFSET(0x16AC0A90)
#define JBKFPAIKDOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16AC0910)
#define JBKFPAIKDOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC0CB0)

inline static constexpr unsigned int JBKFPAIKDOJ_TypeDefinitionIndex = 48283;

class JBKFPAIKDOJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FBPCMIOGDGJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x20
	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>* LEMBMDONOOK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKFPAIKDOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBKFPAIKDOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKFPAIKDOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>* LDJFJOJNCPL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBKFPAIKDOJ_LDJFJOJNCPL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBKFPAIKDOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
