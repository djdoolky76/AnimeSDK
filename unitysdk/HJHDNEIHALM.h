#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HJHDNEIHALM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A1B660)
#define HJHDNEIHALM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A1B560)
#define HJHDNEIHALM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1B650)

inline static constexpr unsigned int HJHDNEIHALM_TypeDefinitionIndex = 78774;

class HJHDNEIHALM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GMKOLLKLIHP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x20
	::UnityEngine::GameObject* DAPAOLBHEKN; // 0x28
	::MoleMole::UIGeneralButtonController* JDCDMDKFGGA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHDNEIHALM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJHDNEIHALM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJHDNEIHALM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
