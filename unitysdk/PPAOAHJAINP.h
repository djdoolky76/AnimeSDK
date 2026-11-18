#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFPKGIKEEJ.h"

class CLMCPKLMOBB;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionBySubState; }

#define PPAOAHJAINP_IOPBOOCFMNJ_OFFSET UNITYSDK_OFFSET(0x194BEF90)
#define PPAOAHJAINP__CTOR_OFFSET UNITYSDK_OFFSET(0x194BEF10)

inline static constexpr unsigned int PPAOAHJAINP_TypeDefinitionIndex = 45628;

class PPAOAHJAINP : public ::PDFPKGIKEEJ
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionBySubState* DFMKILICPFB; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + PPAOAHJAINP__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IOPBOOCFMNJ(::CLMCPKLMOBB* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLMCPKLMOBB*))((::PBYTE)hIl2Cpp + PPAOAHJAINP_IOPBOOCFMNJ_OFFSET))(this, AAOCANGHBDG);
	}
};
