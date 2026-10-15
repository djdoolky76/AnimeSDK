#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/System/Object.h"
class IJEKJNBKPJN;
namespace RPG::Client { class AssemNPC; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE63F790)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CREATEASSEMBLYNPC_B__0_OFFSET UNITYSDK_OFFSET(0xE6642C0)

namespace RPG::GameCore
{
	class EntityManagerExtension___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* uniqueName; // 0x10
		::System::Action* OnLoadFinish; // 0x18
		::RPG::GameCore::EntityManager* pManager; // 0x20
		::RPG::Client::AssemNPC* npcConfig; // 0x28
		::RPG::GameCore::GameEntity* pEntity; // 0x30
		::RPG::Client::EAssemblyNPC npcType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateAssemblyNPC_b__0(::IJEKJNBKPJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJEKJNBKPJN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CREATEASSEMBLYNPC_B__0_OFFSET))(this, a1);
		}

	};
}
