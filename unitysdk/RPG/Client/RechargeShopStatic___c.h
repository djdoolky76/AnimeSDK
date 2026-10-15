#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_RECHARGESHOPSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE5A210)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE5A240)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_0_OFFSET UNITYSDK_OFFSET(0xDE5A250)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_1_OFFSET UNITYSDK_OFFSET(0xDE5A280)

namespace RPG::Client
{
	class RechargeShopStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__16_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::ItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57720);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::GameCore::ItemConfig*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::GameCore::ItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57728);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* _CollectAndSortItems_b__16_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_0_OFFSET))(this, a1);
		}

		::System::Int32 _CollectAndSortItems_b__16_1(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_1_OFFSET))(this, a1, a2);
		}

	};
}
