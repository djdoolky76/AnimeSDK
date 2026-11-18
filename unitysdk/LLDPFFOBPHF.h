#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define LLDPFFOBPHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1519E0F0)
#define LLDPFFOBPHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1519E060)
#define LLDPFFOBPHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1519DEC0)
#define LLDPFFOBPHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1519E0E0)

inline static constexpr unsigned int LLDPFFOBPHF_TypeDefinitionIndex = 77760;

class LLDPFFOBPHF : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x20
	::UnityEngine::UI::Extension::UISlider* MPPJIMNMHLN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDPFFOBPHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLDPFFOBPHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDPFFOBPHF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLDPFFOBPHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
