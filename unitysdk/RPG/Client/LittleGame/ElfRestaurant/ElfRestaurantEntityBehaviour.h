#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"
class IJHPDDHMEHA;
class PGBLBOJBDGG;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xD42CB30)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_HJAGKGDHELE_OFFSET UNITYSDK_OFFSET(0xD42C830)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0xD42BB10)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_NPONPKJEJAO_OFFSET UNITYSDK_OFFSET(0xD42C9B0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_OHCFJMEEDMO_OFFSET UNITYSDK_OFFSET(0xD42BFC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD42C670)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xD42C4C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD42BD10)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantEntityBehaviour_TypeDefinitionIndex = 77249;

	class ElfRestaurantEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* KAKEIDJDNHJ; // 0x38
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x40
		::IJHPDDHMEHA* DODNHKCLIGO; // 0x48
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantEntityBehaviour")->GetStaticField(0x9CA0);
		}

		// static const ::System::Object DFOHPAMBNFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void OHCFJMEEDMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_OHCFJMEEDMO_OFFSET))(this);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void HJAGKGDHELE(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_HJAGKGDHELE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPONPKJEJAO(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_NPONPKJEJAO_OFFSET))(this, a1, a2, a3);
		}

	};
}
