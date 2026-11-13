#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RechargeGiftRewardData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RECHARGEGIFTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D071660)
#define RPG_CLIENT_RECHARGEGIFTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D071690)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1D0716A0)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__25_1_OFFSET UNITYSDK_OFFSET(0x1D0716C0)
#define RPG_CLIENT_RECHARGEGIFTDATA___C___CTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1D0716E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftData___c_TypeDefinitionIndex = 68729;

	class RechargeGiftData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69EB0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69EB8);
		}

		static ::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69EC0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69EC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_Status_b__25_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Status_b__25_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__25_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>* __ctor_b__56_0(::RPG::Client::RechargeGiftRewardData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C___CTOR_B__56_0_OFFSET))(this, a1);
		}

	};
}
