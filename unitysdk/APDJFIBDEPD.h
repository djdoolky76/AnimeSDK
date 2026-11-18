#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHadalZone_LevelInfo_BossCard_V2_WidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define APDJFIBDEPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1437C020)
#define APDJFIBDEPD_FHKPHDMDBCN_OFFSET UNITYSDK_OFFSET(0x1437BDB0)
#define APDJFIBDEPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1437BF90)
#define APDJFIBDEPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1437BBC0)
#define APDJFIBDEPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1437C010)

inline static constexpr unsigned int APDJFIBDEPD_TypeDefinitionIndex = 88899;

class APDJFIBDEPD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIHadalZone_LevelInfo_BossCard_V2_WidgetController*>* OBHHCAJOKMF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EOKGFIBHOPL; // 0x30
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* LJOKAOFDEOA; // 0x38
	::UnityEngine::RectTransform* PEFNEBEDKBH; // 0x40
	::UnityEngine::RectTransform* CLAMLGLFAEG; // 0x48
	::UnityEngine::RectTransform* BDBHPNDODOM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDJFIBDEPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APDJFIBDEPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APDJFIBDEPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDJFIBDEPD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FHKPHDMDBCN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APDJFIBDEPD_FHKPHDMDBCN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
