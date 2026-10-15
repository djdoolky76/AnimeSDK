#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class JBNGCJJDLHL;
namespace RPG::Client { class RechargeGiftData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RECHARGESHOPMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE59D60)
#define RPG_CLIENT_RECHARGESHOPMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE59D90)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_0_OFFSET UNITYSDK_OFFSET(0xDE59E00)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_1_OFFSET UNITYSDK_OFFSET(0xDE59E10)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0xDE59DA0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__32_0_OFFSET UNITYSDK_OFFSET(0xDE59DE0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET UNITYSDK_OFFSET(0xDE59DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c_TypeDefinitionIndex = 66798;

	class RechargeShopModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::JBNGCJJDLHL*, ::System::UInt32>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::JBNGCJJDLHL*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57440);
		}

		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57448);
		}

		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57450);
		}

		static ::System::Func_2<::System::ValueTuple, ::RPG::Client::RechargeGiftData*>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::System::ValueTuple, ::RPG::Client::RechargeGiftData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57458);
		}

		static ::System::Func_2<::System::ValueTuple, ::System::UInt32>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57460);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestData_b__24_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET))(this, a1);
		}

		::System::Boolean __RequestData_b__26_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGetRechargeGiftInfoScRsp_b__32_0(::JBNGCJJDLHL* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::JBNGCJJDLHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__32_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetShopGiftsByShopID_b__37_0(::System::ValueTuple a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_0_OFFSET))(this, a1);
		}

		::RPG::Client::RechargeGiftData* _GetShopGiftsByShopID_b__37_1(::System::ValueTuple a1)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_1_OFFSET))(this, a1);
		}

	};
}
