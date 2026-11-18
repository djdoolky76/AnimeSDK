#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }

#define CCGAMPEFJCP_CKJLLANBAOB_OFFSET UNITYSDK_OFFSET(0x1399FA80)
#define CCGAMPEFJCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1399FA70)

inline static constexpr unsigned int CCGAMPEFJCP_TypeDefinitionIndex = 47512;

class CCGAMPEFJCP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CCGAMPEFJCP__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* CKJLLANBAOB()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGAMPEFJCP_CKJLLANBAOB_OFFSET))(this);
	}
};
