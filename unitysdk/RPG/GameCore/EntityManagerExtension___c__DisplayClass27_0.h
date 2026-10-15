#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLOIJNFDOID;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE646640)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATESTORYSTILLNPCENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xE663A40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATESTORYSTILLNPCENTITY_B__1_OFFSET UNITYSDK_OFFSET(0xE663A80)

namespace RPG::GameCore
{
	class EntityManagerExtension___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pEntity; // 0x10
		::System::Action* onLoadFinish; // 0x18
		::JLOIJNFDOID* stillModelCmpt; // 0x20
		::RPG::GameCore::EntityManager* pManager; // 0x28
		::System::String* strCharacterName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateStoryStillNPCEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATESTORYSTILLNPCENTITY_B__0_OFFSET))(this, a1);
		}

		::System::Void _ClientCreateStoryStillNPCEntity_b__1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATESTORYSTILLNPCENTITY_B__1_OFFSET))(this, a1);
		}

	};
}
