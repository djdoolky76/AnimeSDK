#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define APBCBEDMHCN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1700D450)
#define APBCBEDMHCN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1700D3A0)
#define APBCBEDMHCN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1700D200)
#define APBCBEDMHCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1700D440)

inline static constexpr unsigned int APBCBEDMHCN_TypeDefinitionIndex = 62330;

class APBCBEDMHCN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JLLJPNMPKJA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBCBEDMHCN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APBCBEDMHCN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBCBEDMHCN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APBCBEDMHCN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
