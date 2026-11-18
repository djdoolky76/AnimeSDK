#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHandBookEntranceTipsWidgetController; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class LayoutElement; }
template <typename T> class CBCLGFEGHLJ_1;

#define MCIJKAEAHIC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C75190)
#define MCIJKAEAHIC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C75090)
#define MCIJKAEAHIC_NFGBHDJMBGF_OFFSET UNITYSDK_OFFSET(0x16C74EB0)
#define MCIJKAEAHIC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C74B70)
#define MCIJKAEAHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C75180)

inline static constexpr unsigned int MCIJKAEAHIC_TypeDefinitionIndex = 77879;

class MCIJKAEAHIC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::HorizontalLayoutGroup* MLNOHLIOPEO; // 0x18
	::FGCOIBFFCHB* KCDBANCFJON; // 0x20
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x28
	::UnityEngine::UI::LayoutElement* OBOCFOCNAOF; // 0x30
	::MoleMole::NotificationBadge* DOLIDFBDIKF; // 0x38
	::UnityEngine::RectTransform* DOFGOKNLKFK; // 0x40
	::GCIMMDDIFBJ* ELDILOKLCBM; // 0x48
	::UnityEngine::RectTransform* HGGNLKMKDLL; // 0x50
	::LGINJIKKBJA* GCNGIFJBIGC; // 0x58
	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>*>* GKMDDOPPNJH; // 0x60
	::CBCLGFEGHLJ_1<::MoleMole::UIHandBookEntranceTipsWidgetController*>* PCACDCGGPGA; // 0x68
	::MoleMole::NotificationBadgeEx* JEBDKOJEBLA; // 0x70
	::UIControllerExtensionData* NHPCCIFGOBF; // 0x78
	::FGCOIBFFCHB* CJNKLHCIOHE; // 0x80
	::MoleMole::NotificationBadgeEx* ODAMLKKFHPI; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIJKAEAHIC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCIJKAEAHIC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIJKAEAHIC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>*>* NFGBHDJMBGF(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCIJKAEAHIC_NFGBHDJMBGF_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCIJKAEAHIC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
