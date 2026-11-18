#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define JOCKPFBDNHC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CD2AC0)
#define JOCKPFBDNHC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CD29F0)
#define JOCKPFBDNHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CD2880)
#define JOCKPFBDNHC__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD2AB0)

inline static constexpr unsigned int JOCKPFBDNHC_TypeDefinitionIndex = 62017;

class JOCKPFBDNHC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCKPFBDNHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOCKPFBDNHC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOCKPFBDNHC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCKPFBDNHC_KGEBDLGBGNM_OFFSET))(this);
	}
};
