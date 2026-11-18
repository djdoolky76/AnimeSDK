#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BangbooGameSubsystem; }

#define CBDDODKFCIJ_MDGBMEELECC_GFBPNOBFEAF_OFFSET UNITYSDK_OFFSET(0x199F0710)
#define CBDDODKFCIJ_MDGBMEELECC__CTOR_OFFSET UNITYSDK_OFFSET(0x199F0700)

inline static constexpr unsigned int CBDDODKFCIJ_MDGBMEELECC_TypeDefinitionIndex = 74349;

class CBDDODKFCIJ_MDGBMEELECC : public ::System::Object
{
public:
	::MoleMole::BangbooGameSubsystem* MLOAMBHHKOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_MDGBMEELECC__CTOR_OFFSET))(this);
	}

	::System::Void GFBPNOBFEAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_MDGBMEELECC_GFBPNOBFEAF_OFFSET))(this);
	}
};
