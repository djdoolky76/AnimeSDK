#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/System/Object.h"
class IJEKJNBKPJN;
namespace RPG::Client { class AssemNPC; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF0E9160)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CREATEASSEMBLYNPC_B__0_OFFSET UNITYSDK_OFFSET(0xF0E9170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass6_0_TypeDefinitionIndex = 59017;

	class EntityManagerExtension___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::AssemNPC* npcConfig; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* OnLoadFinish; // 0x18
		::System::String* uniqueName; // 0x20
		::RPG::GameCore::GameEntity* pEntity; // 0x28
		::RPG::GameCore::EntityManager* pManager; // 0x30
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
