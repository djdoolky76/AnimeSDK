#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ENOJJMDBDDA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0xBB26B40)
#define ENOJJMDBDDA_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0xBB26D80)
#define ENOJJMDBDDA_JFGOAMIMNNN_OFFSET UNITYSDK_OFFSET(0xBB26970)
#define ENOJJMDBDDA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB26AC0)
#define ENOJJMDBDDA_OBDOIJCMDHI_OFFSET UNITYSDK_OFFSET(0xBB26790)
#define ENOJJMDBDDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB265B0)
#define ENOJJMDBDDA_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0xBB26D90)
#define ENOJJMDBDDA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB26CF0)

inline static constexpr unsigned int ENOJJMDBDDA_TypeDefinitionIndex = 61101;

class ENOJJMDBDDA : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* JDOCKMGKGGC; // 0x30
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FIMNNLOIPDF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOJJMDBDDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* JFGOAMIMNNN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_JFGOAMIMNNN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_IPFGEIDINMP_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* OBDOIJCMDHI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_OBDOIJCMDHI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + ENOJJMDBDDA_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}
};
