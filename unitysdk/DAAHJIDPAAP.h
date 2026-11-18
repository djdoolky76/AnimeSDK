#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIActivityReturnDoubleRowItemV2WidgetController; }
namespace MoleMole { class UIActivityReturnFreeMaterialWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DAAHJIDPAAP_BLLDLJBMFIM_OFFSET UNITYSDK_OFFSET(0x1A1CA540)
#define DAAHJIDPAAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1CA7B0)
#define DAAHJIDPAAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1CA720)
#define DAAHJIDPAAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1CA3B0)
#define DAAHJIDPAAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CA7A0)

inline static constexpr unsigned int DAAHJIDPAAP_TypeDefinitionIndex = 85879;

class DAAHJIDPAAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIActivityReturnFreeMaterialWidgetController*>* DMNOGDPJAPN; // 0x28
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>*>* AKCBPHIEIAF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAHJIDPAAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAAHJIDPAAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>*>* BLLDLJBMFIM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAAHJIDPAAP_BLLDLJBMFIM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAHJIDPAAP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAAHJIDPAAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
