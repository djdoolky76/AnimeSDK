#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFPKGIKEEJ.h"

class CLMCPKLMOBB;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionRelativePosition; }

#define PLJOEBADGEJ_IOPBOOCFMNJ_OFFSET UNITYSDK_OFFSET(0x1CB4FF00)
#define PLJOEBADGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB501F0)

inline static constexpr unsigned int PLJOEBADGEJ_TypeDefinitionIndex = 65356;

class PLJOEBADGEJ : public ::PDFPKGIKEEJ
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionRelativePosition* OKDACNLPNAD; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + PLJOEBADGEJ__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IOPBOOCFMNJ(::CLMCPKLMOBB* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLMCPKLMOBB*))((::PBYTE)hIl2Cpp + PLJOEBADGEJ_IOPBOOCFMNJ_OFFSET))(this, AAOCANGHBDG);
	}
};
