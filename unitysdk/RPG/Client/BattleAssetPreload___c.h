#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7FB280)
#define RPG_CLIENT_BATTLEASSETPRELOAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC7FB2B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD___C__SET_PRELOADPHASE_B__78_0_OFFSET UNITYSDK_OFFSET(0xC7FB2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload___c_TypeDefinitionIndex = 59664;

	class BattleAssetPreload___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580F0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__78_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C_CTOR_OFFSET))(this);
		}

		::System::Void _set_PreloadPhase_b__78_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__SET_PRELOADPHASE_B__78_0_OFFSET))(this, a1);
		}

	};
}
