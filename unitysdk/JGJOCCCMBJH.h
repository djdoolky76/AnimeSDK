#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGachaRolePoolWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JGJOCCCMBJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A7C200)
#define JGJOCCCMBJH_GGHCLBMBOME_OFFSET UNITYSDK_OFFSET(0x14A7BF00)
#define JGJOCCCMBJH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A7C0E0)
#define JGJOCCCMBJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A7BC30)
#define JGJOCCCMBJH__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7C1F0)

inline static constexpr unsigned int JGJOCCCMBJH_TypeDefinitionIndex = 84248;

class JGJOCCCMBJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JMDMIBKFJMA; // 0x18
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* FNODKGCEADB; // 0x28
	::LGINJIKKBJA* BKDDKDMILCA; // 0x30
	::LGINJIKKBJA* DNPADFAGKLG; // 0x38
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIGachaRolePoolWidgetController*>*>* FOHCIKIDFBG; // 0x40
	::UnityEngine::Transform* LBMPDPJKNJH; // 0x48
	::LGINJIKKBJA* IIGFPCKKOAA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* JLHJKIMOGEA; // 0x58
	::LGINJIKKBJA* OGKBJILLFFK; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* DDPNMGCLDHO; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x78
	::UnityEngine::Transform* FMLHPKIHFJC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJOCCCMBJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGJOCCCMBJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJOCCCMBJH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIGachaRolePoolWidgetController*>*>* GGHCLBMBOME(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIGachaRolePoolWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGJOCCCMBJH_GGHCLBMBOME_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGJOCCCMBJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
