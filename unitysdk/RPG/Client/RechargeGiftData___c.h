#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RechargeGiftRewardData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RECHARGEGIFTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE55F40)
#define RPG_CLIENT_RECHARGEGIFTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE55F70)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_0_OFFSET UNITYSDK_OFFSET(0xDE55F80)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_1_OFFSET UNITYSDK_OFFSET(0xDE55FA0)
#define RPG_CLIENT_RECHARGEGIFTDATA___C___CTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0xDE55FC0)

namespace RPG::Client
{
	class RechargeGiftData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x570F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x570F8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57100);
		}

		static ::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_Status_b__22_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Status_b__22_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>* __ctor_b__53_0(::RPG::Client::RechargeGiftRewardData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C___CTOR_B__53_0_OFFSET))(this, a1);
		}

	};
}
