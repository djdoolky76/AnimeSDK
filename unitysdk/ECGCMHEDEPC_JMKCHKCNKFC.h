#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }

#define ECGCMHEDEPC_JMKCHKCNKFC_ECOHPNACGIB_OFFSET UNITYSDK_OFFSET(0x16130CE0)
#define ECGCMHEDEPC_JMKCHKCNKFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16130CD0)

inline static constexpr unsigned int ECGCMHEDEPC_JMKCHKCNKFC_TypeDefinitionIndex = 55292;

class ECGCMHEDEPC_JMKCHKCNKFC : public ::System::Object
{
public:
	::System::Boolean CPHDDAGKHLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JMKCHKCNKFC__CTOR_OFFSET))(this);
	}

	::System::Void ECOHPNACGIB(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JMKCHKCNKFC_ECOHPNACGIB_OFFSET))(this, PIIPCLCCOIG, OFDKNLCFCPL);
	}
};
