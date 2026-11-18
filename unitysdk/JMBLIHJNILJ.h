#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define JMBLIHJNILJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C39980)
#define JMBLIHJNILJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C39880)
#define JMBLIHJNILJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C39650)
#define JMBLIHJNILJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C39970)

inline static constexpr unsigned int JMBLIHJNILJ_TypeDefinitionIndex = 82128;

class JMBLIHJNILJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* EJHNNMBHAPK; // 0x28
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* MABMPLFHMOL; // 0x38
	::MonoUITableScrollV2* IIEKOLJOILO; // 0x40
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x48
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBLIHJNILJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMBLIHJNILJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMBLIHJNILJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBLIHJNILJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
