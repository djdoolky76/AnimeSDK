#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }

#define LCDLBLNOBKN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DE01D0)
#define LCDLBLNOBKN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DE0120)
#define LCDLBLNOBKN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DDFF90)
#define LCDLBLNOBKN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE01C0)

inline static constexpr unsigned int LCDLBLNOBKN_TypeDefinitionIndex = 90931;

class LCDLBLNOBKN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x18
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x20
	::MoleMole::UIGeneralButtonController* MDNDMGPEEGM; // 0x28
	::FGCOIBFFCHB* LPHGEDAHEPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDLBLNOBKN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCDLBLNOBKN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDLBLNOBKN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCDLBLNOBKN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
