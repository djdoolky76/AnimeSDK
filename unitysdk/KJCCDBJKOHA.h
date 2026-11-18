#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }

#define KJCCDBJKOHA_COLLECT_OFFSET UNITYSDK_OFFSET(0x1765DA60)
#define KJCCDBJKOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1765DAF0)

inline static constexpr unsigned int KJCCDBJKOHA_TypeDefinitionIndex = 70170;

class KJCCDBJKOHA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCCDBJKOHA__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Collect()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCCDBJKOHA_COLLECT_OFFSET))(this);
	}
};
