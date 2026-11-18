#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define EENOIHHIJDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10634360)
#define EENOIHHIJDL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10634290)
#define EENOIHHIJDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10634120)
#define EENOIHHIJDL__CTOR_OFFSET UNITYSDK_OFFSET(0x10634350)

inline static constexpr unsigned int EENOIHHIJDL_TypeDefinitionIndex = 82768;

class EENOIHHIJDL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JFDHDGDAJDH; // 0x18
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENOIHHIJDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EENOIHHIJDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENOIHHIJDL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EENOIHHIJDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
