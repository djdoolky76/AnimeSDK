#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }

#define AIMCJHMJOAE_CKJLLANBAOB_OFFSET UNITYSDK_OFFSET(0x14214E70)
#define AIMCJHMJOAE__CTOR_OFFSET UNITYSDK_OFFSET(0x14214F00)

inline static constexpr unsigned int AIMCJHMJOAE_TypeDefinitionIndex = 79236;

class AIMCJHMJOAE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMCJHMJOAE__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* CKJLLANBAOB()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMCJHMJOAE_CKJLLANBAOB_OFFSET))(this);
	}
};
