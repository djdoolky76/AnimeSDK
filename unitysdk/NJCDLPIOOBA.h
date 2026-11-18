#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NJCDLPIOOBA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE75FED0)
#define NJCDLPIOOBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE75FE10)
#define NJCDLPIOOBA__CTOR_OFFSET UNITYSDK_OFFSET(0xE75FEC0)

inline static constexpr unsigned int NJCDLPIOOBA_TypeDefinitionIndex = 66111;

class NJCDLPIOOBA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HMJKKMLBFAK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FOKAHHGDAHL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCDLPIOOBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJCDLPIOOBA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJCDLPIOOBA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
