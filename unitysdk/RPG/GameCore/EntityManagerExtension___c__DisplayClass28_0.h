#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF0E89D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0__CLIENTCREATESTORYNPCENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xF0E89E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0__CLIENTCREATESTORYNPCENTITY_B__1_OFFSET UNITYSDK_OFFSET(0xF0E8C20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0__CLIENTCREATESTORYNPCENTITY_B__2_OFFSET UNITYSDK_OFFSET(0xF0E8C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass28_0_TypeDefinitionIndex = 59012;

	class EntityManagerExtension___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::String* appearancePreset; // 0x10
		::RPG::GameCore::EntityManager* pManager; // 0x18
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x20
		::Il2CppArray<::System::String*>* overrideReplaceMaterialKeyList; // 0x28
		::RPG::GameCore::StoryCharacterRow* storyCharacterRow; // 0x30
		::RPG::GameCore::NPCSubType subType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateStoryNPCEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0__CLIENTCREATESTORYNPCENTITY_B__0_OFFSET))(this, a1);
		}

		::System::Void _ClientCreateStoryNPCEntity_b__1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0__CLIENTCREATESTORYNPCENTITY_B__1_OFFSET))(this, a1);
		}

		::System::Void _ClientCreateStoryNPCEntity_b__2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS28_0__CLIENTCREATESTORYNPCENTITY_B__2_OFFSET))(this, a1);
		}

	};
}
