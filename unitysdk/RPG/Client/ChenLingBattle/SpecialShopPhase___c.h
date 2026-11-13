#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E262B40)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E262B80)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E262BA0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET UNITYSDK_OFFSET(0x1E262B90)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SpecialShopPhase___c_TypeDefinitionIndex = 78655;

	class SpecialShopPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72210);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72218);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x72220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRefreshShop_b__6_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _RequestBuyShopItem_b__9_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET))(this, a1);
		}

	};
}
