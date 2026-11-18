#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NNHKGBIMFAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115AD560)
#define NNHKGBIMFAE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x115AD490)
#define NNHKGBIMFAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115AD280)
#define NNHKGBIMFAE__CTOR_OFFSET UNITYSDK_OFFSET(0x115AD550)

inline static constexpr unsigned int NNHKGBIMFAE_TypeDefinitionIndex = 82097;

class NNHKGBIMFAE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x18
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::RectTransform* PEFNEBEDKBH; // 0x30
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x38
	::LGINJIKKBJA* JDCDMDKFGGA; // 0x40
	::ADEJAGFCBHK* FAGMEMGEGFP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHKGBIMFAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNHKGBIMFAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHKGBIMFAE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNHKGBIMFAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
