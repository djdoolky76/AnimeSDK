#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define IODHKENMIFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x197E25B0)
#define IODHKENMIFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x197E24C0)
#define IODHKENMIFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x197E2310)
#define IODHKENMIFH__CTOR_OFFSET UNITYSDK_OFFSET(0x197E25A0)

inline static constexpr unsigned int IODHKENMIFH_TypeDefinitionIndex = 90466;

class IODHKENMIFH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CFFOPIOCDJE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ECMEGBEIOLH; // 0x28
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x38
	::MonoUITableScrollV2* HJPPDOCGAOC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODHKENMIFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IODHKENMIFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IODHKENMIFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODHKENMIFH_KGEBDLGBGNM_OFFSET))(this);
	}
};
