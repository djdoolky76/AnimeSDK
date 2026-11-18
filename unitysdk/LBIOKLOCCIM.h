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
template <typename T> class KNLFLMMHALL_1;

#define LBIOKLOCCIM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1517DEB0)
#define LBIOKLOCCIM_GEILJJHKLGA_OFFSET UNITYSDK_OFFSET(0x1517DC10)
#define LBIOKLOCCIM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1517DE00)
#define LBIOKLOCCIM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1517DA20)
#define LBIOKLOCCIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1517DEA0)

inline static constexpr unsigned int LBIOKLOCCIM_TypeDefinitionIndex = 76561;

class LBIOKLOCCIM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CAHPNFMBIDB; // 0x18
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x20
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FIOPMNMJBCG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KBGIAIHCEPL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIOKLOCCIM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBIOKLOCCIM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIOKLOCCIM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBIOKLOCCIM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* GEILJJHKLGA(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBIOKLOCCIM_GEILJJHKLGA_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
