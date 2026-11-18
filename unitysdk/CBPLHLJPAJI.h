#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFPKGIKEEJ.h"

class CLMCPKLMOBB;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionByEntityType; }

#define CBPLHLJPAJI_IOPBOOCFMNJ_OFFSET UNITYSDK_OFFSET(0x15313D20)
#define CBPLHLJPAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15313CA0)

inline static constexpr unsigned int CBPLHLJPAJI_TypeDefinitionIndex = 68961;

class CBPLHLJPAJI : public ::PDFPKGIKEEJ
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionByEntityType* DFMKILICPFB; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CBPLHLJPAJI__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IOPBOOCFMNJ(::CLMCPKLMOBB* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLMCPKLMOBB*))((::PBYTE)hIl2Cpp + CBPLHLJPAJI_IOPBOOCFMNJ_OFFSET))(this, AAOCANGHBDG);
	}
};
