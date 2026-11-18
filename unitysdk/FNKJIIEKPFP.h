#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFashionStoreEditPanelWidgetController; }
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define FNKJIIEKPFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EC4DF0)
#define FNKJIIEKPFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EC4C70)
#define FNKJIIEKPFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EC49B0)
#define FNKJIIEKPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC4DE0)

inline static constexpr unsigned int FNKJIIEKPFP_TypeDefinitionIndex = 81098;

class FNKJIIEKPFP : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* JGPBKAHIBLG; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* OKGBOAENDNC; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* CCDNKBONPLB; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIFashionStoreEditPanelWidgetController*>* FMPMOEIHCHG; // 0x30
	::MoleMole::UIGeneralButtonController* LMDPKNBLCMB; // 0x38
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIFashionStorePreviewPanelWidgetController*>* BKGCAPKCJIH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKJIIEKPFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNKJIIEKPFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKJIIEKPFP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNKJIIEKPFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
