#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFPKGIKEEJ.h"

class CLMCPKLMOBB;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionOr; }

#define NIBBELEHBPK_IOPBOOCFMNJ_OFFSET UNITYSDK_OFFSET(0x16B7EDC0)
#define NIBBELEHBPK__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7ED40)

inline static constexpr unsigned int NIBBELEHBPK_TypeDefinitionIndex = 63479;

class NIBBELEHBPK : public ::PDFPKGIKEEJ
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionOr* OKDACNLPNAD; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + NIBBELEHBPK__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IOPBOOCFMNJ(::CLMCPKLMOBB* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLMCPKLMOBB*))((::PBYTE)hIl2Cpp + NIBBELEHBPK_IOPBOOCFMNJ_OFFSET))(this, AAOCANGHBDG);
	}
};
