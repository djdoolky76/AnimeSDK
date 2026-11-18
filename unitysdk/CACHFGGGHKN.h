#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistSuitItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define CACHFGGGHKN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F0B0E0)
#define CACHFGGGHKN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F0B010)
#define CACHFGGGHKN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F0ABD0)
#define CACHFGGGHKN_OLPPMHKPLKP_OFFSET UNITYSDK_OFFSET(0x14F0AE30)
#define CACHFGGGHKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0B0D0)

inline static constexpr unsigned int CACHFGGGHKN_TypeDefinitionIndex = 50647;

class CACHFGGGHKN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KGNEFGEKIEA; // 0x18
	::LGINJIKKBJA* FCDBKDHEEJO; // 0x20
	::UnityEngine::GameObject* OCOFHEMFJOJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HFGFMKAKMLM; // 0x30
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x38
	::UnityEngine::GameObject* MFGCDHEPLPM; // 0x40
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSuitItemWidgetController*>*>* GNMGKMPMCDD; // 0x48
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSuitItemWidgetController*>*>* OKOPPNCACHK; // 0x50
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x58
	::LGINJIKKBJA* OKGBOAENDNC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHFGGGHKN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CACHFGGGHKN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CACHFGGGHKN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSuitItemWidgetController*>*>* OLPPMHKPLKP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSuitItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CACHFGGGHKN_OLPPMHKPLKP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHFGGGHKN_KGEBDLGBGNM_OFFSET))(this);
	}
};
