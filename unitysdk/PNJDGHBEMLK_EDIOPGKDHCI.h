#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace System { class Action; }

#define PNJDGHBEMLK_EDIOPGKDHCI_APADLBHGKPG_OFFSET UNITYSDK_OFFSET(0x1D9D7160)
#define PNJDGHBEMLK_EDIOPGKDHCI_KNMEMKFHBCE_OFFSET UNITYSDK_OFFSET(0x1D9D6F60)
#define PNJDGHBEMLK_EDIOPGKDHCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D6F50)

inline static constexpr unsigned int PNJDGHBEMLK_EDIOPGKDHCI_TypeDefinitionIndex = 64956;

class PNJDGHBEMLK_EDIOPGKDHCI : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_Move* OAIDHFOBKKO; // 0x18
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x20
	::System::Single HGGJPNPGMMO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EDIOPGKDHCI__CTOR_OFFSET))(this);
	}

	::System::Void KNMEMKFHBCE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EDIOPGKDHCI_KNMEMKFHBCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void APADLBHGKPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EDIOPGKDHCI_APADLBHGKPG_OFFSET))(this);
	}
};
