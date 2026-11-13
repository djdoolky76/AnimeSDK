#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25B170)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25B1B0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E25B1D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTFINISHSHOP_B__11_1_OFFSET UNITYSDK_OFFSET(0x1E25B1E0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET UNITYSDK_OFFSET(0x1E25B1C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTSELLHANDCARD_B__13_0_OFFSET UNITYSDK_OFFSET(0x1E25B1F0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase___c_TypeDefinitionIndex = 78652;

	class ShopPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72170);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72178);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72180);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72188);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRefreshShop_b__6_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _RequestBuyShopItem_b__9_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _RequestFinishShop_b__11_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTFINISHSHOP_B__11_1_OFFSET))(this, a1);
		}

		::System::Void _RequestSellHandCard_b__13_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTSELLHANDCARD_B__13_0_OFFSET))(this, a1);
		}

	};
}
