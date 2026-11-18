#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFPKGIKEEJ.h"

class CLMCPKLMOBB;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionAnd; }

#define LDCMJAIOGDA_IOPBOOCFMNJ_OFFSET UNITYSDK_OFFSET(0x15BB8090)
#define LDCMJAIOGDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB8010)

inline static constexpr unsigned int LDCMJAIOGDA_TypeDefinitionIndex = 84289;

class LDCMJAIOGDA : public ::PDFPKGIKEEJ
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionAnd* OKDACNLPNAD; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + LDCMJAIOGDA__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IOPBOOCFMNJ(::CLMCPKLMOBB* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLMCPKLMOBB*))((::PBYTE)hIl2Cpp + LDCMJAIOGDA_IOPBOOCFMNJ_OFFSET))(this, AAOCANGHBDG);
	}
};
