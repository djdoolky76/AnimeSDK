#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIActivitySeriesNormalRewardWidgetController; }
namespace MoleMole { class UIActivitySeriesRoleRowWidgetController; }
namespace MoleMole { class UIActivitySeriesSpecialRewardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define PAMLKIMJOGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11953E40)
#define PAMLKIMJOGP_GMKGFDJONAE_OFFSET UNITYSDK_OFFSET(0x11953BD0)
#define PAMLKIMJOGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11953DB0)
#define PAMLKIMJOGP_KGENAAAJKND_OFFSET UNITYSDK_OFFSET(0x119539F0)
#define PAMLKIMJOGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11953830)
#define PAMLKIMJOGP__CTOR_OFFSET UNITYSDK_OFFSET(0x11953E30)

inline static constexpr unsigned int PAMLKIMJOGP_TypeDefinitionIndex = 39894;

class PAMLKIMJOGP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x18
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>* MOEPHLCOLJM; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesSpecialRewardWidgetController*>* OAECBFIIJOC; // 0x28
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>* LHEBLJNOILI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* FBPCMIOGDGJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMLKIMJOGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAMLKIMJOGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMLKIMJOGP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>* GMKGFDJONAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAMLKIMJOGP_GMKGFDJONAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>* KGENAAAJKND(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAMLKIMJOGP_KGENAAAJKND_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAMLKIMJOGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
