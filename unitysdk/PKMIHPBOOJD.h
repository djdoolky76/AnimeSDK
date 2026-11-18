#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PKMIHPBOOJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150D2B60)
#define PKMIHPBOOJD_GFDJEOMILAJ_OFFSET UNITYSDK_OFFSET(0x150D2740)
#define PKMIHPBOOJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150D2A70)
#define PKMIHPBOOJD_NNEFLOJOLAL_OFFSET UNITYSDK_OFFSET(0x150D2920)
#define PKMIHPBOOJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150D2560)
#define PKMIHPBOOJD__CTOR_OFFSET UNITYSDK_OFFSET(0x150D2B50)

inline static constexpr unsigned int PKMIHPBOOJD_TypeDefinitionIndex = 63093;

class PKMIHPBOOJD : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::LGINJIKKBJA*>* DFIHPMFELMK; // 0x18
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x20
	::LGINJIKKBJA* JDMMGAMPIKL; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* HJGPLODFPHA; // 0x30
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x38
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMIHPBOOJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKMIHPBOOJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMIHPBOOJD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::LGINJIKKBJA*>* GFDJEOMILAJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::LGINJIKKBJA*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKMIHPBOOJD_GFDJEOMILAJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* NNEFLOJOLAL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKMIHPBOOJD_NNEFLOJOLAL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKMIHPBOOJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
