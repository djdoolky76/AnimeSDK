#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;

#define ECPNKBOABHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BE4020)
#define ECPNKBOABHA_EHOPOKBHABB_OFFSET UNITYSDK_OFFSET(0x12BE3D30)
#define ECPNKBOABHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BE3F20)
#define ECPNKBOABHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BE3AD0)
#define ECPNKBOABHA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE4010)

inline static constexpr unsigned int ECPNKBOABHA_TypeDefinitionIndex = 51750;

class ECPNKBOABHA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNPFHFKJNEJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CKHKPHBKAOJ; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::MoleMole::UIGeneralButtonController* FBIHFNOOPBG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x48
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* GNODHPGEGCA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* NJNNALMMHFG; // 0x58
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNKBOABHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPNKBOABHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNKBOABHA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* EHOPOKBHABB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPNKBOABHA_EHOPOKBHABB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPNKBOABHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
