#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class NHFJJFFCDFM;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define EMKAPGNIOFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x161609C0)
#define EMKAPGNIOFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x161608B0)
#define EMKAPGNIOFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16160690)
#define EMKAPGNIOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x161609B0)

inline static constexpr unsigned int EMKAPGNIOFM_TypeDefinitionIndex = 92231;

class EMKAPGNIOFM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::UnityEngine::RectTransform* EEFJOFJOLKB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ADHNEINAJEN; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::RectTransform* HFGFMKAKMLM; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ELJGFCFBLFH; // 0x48
	::KNLFLMMHALL_1<::NHFJJFFCDFM*>* HFDNEOOLNLN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAPGNIOFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMKAPGNIOFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMKAPGNIOFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAPGNIOFM_KGEBDLGBGNM_OFFSET))(this);
	}
};
