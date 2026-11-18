#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define COAFKBHNCCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E16570)
#define COAFKBHNCCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E164E0)
#define COAFKBHNCCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E16390)
#define COAFKBHNCCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E16560)

inline static constexpr unsigned int COAFKBHNCCE_TypeDefinitionIndex = 40390;

class COAFKBHNCCE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAFKBHNCCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COAFKBHNCCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COAFKBHNCCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAFKBHNCCE_KGEBDLGBGNM_OFFSET))(this);
	}
};
