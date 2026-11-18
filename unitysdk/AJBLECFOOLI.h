#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AJBLECFOOLI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11BA2C40)
#define AJBLECFOOLI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11BA2B70)
#define AJBLECFOOLI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11BA2A00)
#define AJBLECFOOLI__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA2C30)

inline static constexpr unsigned int AJBLECFOOLI_TypeDefinitionIndex = 90182;

class AJBLECFOOLI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AGCCEHDJPID; // 0x20
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBLECFOOLI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJBLECFOOLI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJBLECFOOLI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBLECFOOLI_KGEBDLGBGNM_OFFSET))(this);
	}
};
