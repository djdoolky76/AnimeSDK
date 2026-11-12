#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemTreasureMapPage; }
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ITEMTREASUREMAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDC2660)
#define RPG_CLIENT_ITEMTREASUREMAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC26A0)
#define RPG_CLIENT_ITEMTREASUREMAP___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0xDDC26B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemTreasureMap___c_TypeDefinitionIndex = 67672;

	class ItemTreasureMap___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ItemCureInfoDataRow*, ::RPG::Client::ItemTreasureMapPage*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::GameCore::ItemCureInfoDataRow*, ::RPG::Client::ItemTreasureMapPage*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x27C20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x27C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAP___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::ItemTreasureMapPage* __ctor_b__4_0(::RPG::GameCore::ItemCureInfoDataRow* a1)
		{
			return ((::RPG::Client::ItemTreasureMapPage*(*)(::PVOID, ::RPG::GameCore::ItemCureInfoDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAP___C___CTOR_B__4_0_OFFSET))(this, a1);
		}

	};
}
