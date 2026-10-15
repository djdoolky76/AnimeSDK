#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC80A2F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC80A330)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEALLPRELOAD_B__81_0_OFFSET UNITYSDK_OFFSET(0xC80A340)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEULTRAPRELOAD_B__84_0_OFFSET UNITYSDK_OFFSET(0xC80A380)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex = 59650;

	class BattleAssetPreload_CharacterPreloadGroupBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58F20);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__84_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58F28);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__81_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _set_DisableAllPreload_b__81_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEALLPRELOAD_B__81_0_OFFSET))(this, a1);
		}

		::System::Void _set_DisableUltraPreload_b__84_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEULTRAPRELOAD_B__84_0_OFFSET))(this, a1);
		}

	};
}
