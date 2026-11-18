#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZESTREAMING_OFFSET UNITYSDK_OFFSET(0x10D27840)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10D275F0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x10D27890)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D27920)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int ChildTriggerForwarder_TypeDefinitionIndex = 91175;

	class ChildTriggerForwarder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::MoleMole::Battle::Entity*>* MEMAJLBJAHC; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Action_1<::MoleMole::Battle::Entity*>* LMIEPDKPAJP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZE_OFFSET))(this, LMIEPDKPAJP);
		}

		::System::Void InitializeStreaming(::System::Action_1<::MoleMole::Battle::Entity*>* LMIEPDKPAJP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_INITIALIZESTREAMING_OFFSET))(this, LMIEPDKPAJP);
		}

		::System::Void OnTrigger(::MoleMole::Battle::Entity* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_CHILDTRIGGERFORWARDER_ONTRIGGER_OFFSET))(this, LIBPKNHDIGP);
		}
	};
}
