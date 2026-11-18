#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UINewbieGuideRoleItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define PFKAMDPNOAH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15537690)
#define PFKAMDPNOAH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15537640)
#define PFKAMDPNOAH_LOOFMPGMBPG_OFFSET UNITYSDK_OFFSET(0x15537460)
#define PFKAMDPNOAH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155372B0)
#define PFKAMDPNOAH__CTOR_OFFSET UNITYSDK_OFFSET(0x15537680)

inline static constexpr unsigned int PFKAMDPNOAH_TypeDefinitionIndex = 84242;

class PFKAMDPNOAH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* GPJIEHCKFMB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EGOODFOFICC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PIBLKGBMELJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x30
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UINewbieGuideRoleItemWidgetController*>*>* JABIILAAGIH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKAMDPNOAH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFKAMDPNOAH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UINewbieGuideRoleItemWidgetController*>*>* LOOFMPGMBPG(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UINewbieGuideRoleItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFKAMDPNOAH_LOOFMPGMBPG_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFKAMDPNOAH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKAMDPNOAH_KGEBDLGBGNM_OFFSET))(this);
	}
};
