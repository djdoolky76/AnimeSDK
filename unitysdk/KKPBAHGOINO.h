#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFPKGIKEEJ.h"

class CLMCPKLMOBB;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionBySceneProperty; }

#define KKPBAHGOINO_IOPBOOCFMNJ_OFFSET UNITYSDK_OFFSET(0xD3FFE10)
#define KKPBAHGOINO__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FFD90)

inline static constexpr unsigned int KKPBAHGOINO_TypeDefinitionIndex = 60035;

class KKPBAHGOINO : public ::PDFPKGIKEEJ
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionBySceneProperty* DFMKILICPFB; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + KKPBAHGOINO__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IOPBOOCFMNJ(::CLMCPKLMOBB* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLMCPKLMOBB*))((::PBYTE)hIl2Cpp + KKPBAHGOINO_IOPBOOCFMNJ_OFFSET))(this, AAOCANGHBDG);
	}
};
