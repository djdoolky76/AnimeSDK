#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
class BNLHGENFEHG;
class EMJIDLCDFMI;
class PGBLBOJBDGG;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD42BA90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETDIALOGATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD42CF20)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETEFFECTROOT_OFFSET UNITYSDK_OFFSET(0xD42CE60)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD42CDC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETROOT_OFFSET UNITYSDK_OFFSET(0xD42CE00)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETTIPATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD42CEC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD42CB80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD42CD20)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	class ElfRestaurantView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::UnityEngine::Transform* Root; // 0x20
		::UnityEngine::Transform* EffectRoot; // 0x28
		::UnityEngine::Transform* TipAttachPoint; // 0x30
		::UnityEngine::Transform* DialogRoot; // 0x38
		::UnityEngine::GameObject* ArtGO; // 0x40
		::System::UInt32 ID; // 0x48
		::System::Byte _padding0[0x4];
		::PGBLBOJBDGG* _Context; // 0x50
		::BNLHGENFEHG* _Services; // 0x58
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* _Entity; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetEffectRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETEFFECTROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTipAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETTIPATTACHPOINT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetDialogAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETDIALOGATTACHPOINT_OFFSET))(this);
		}

	};
}
