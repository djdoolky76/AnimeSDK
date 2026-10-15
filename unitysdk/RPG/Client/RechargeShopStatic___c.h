#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RECHARGESHOPSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE4F980)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE4F9B0)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_0_OFFSET UNITYSDK_OFFSET(0xDE4F9C0)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_1_OFFSET UNITYSDK_OFFSET(0xDE4F9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopStatic___c_TypeDefinitionIndex = 66802;

	class RechargeShopStatic___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ItemConfig*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B790);
		}

		static ::System::Comparison_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__16_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::ItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B798);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* _CollectAndSortItems_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_0_OFFSET))(this, a1);
		}

		::System::Int32 _CollectAndSortItems_b__16_1(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_1_OFFSET))(this, a1, a2);
		}

	};
}
