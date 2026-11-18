#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthStatusResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_APPENDIFMISMATCH_OFFSET UNITYSDK_OFFSET(0x1CC6E6A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CACHEPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1CC6FD90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHANGESUBCHANNELTOOFFICAL_OFFSET UNITYSDK_OFFSET(0x1CC6DF30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1CC71410)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLAUNCHPARAMS_OFFSET UNITYSDK_OFFSET(0x1CC6E060)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x1CC6DE40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_EXECUTECHECKOUT_OFFSET UNITYSDK_OFFSET(0x1CC70E50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_FINDCACHEDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1CC70160)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CC6D290)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1CC6E9A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1CC714A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_INIT_OFFSET UNITYSDK_OFFSET(0x1CC6D2B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_LOGIN_OFFSET UNITYSDK_OFFSET(0x1CC714F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1CC715B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC6E910)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1CC6EEE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1CC6F100)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x1CC711E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x1CC70C20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x1CC70FC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_PAY_OFFSET UNITYSDK_OFFSET(0x1CC70410)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CC6D2A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC71620)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CHECKENTITLEMENTS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CC71780)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC715C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__INIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CC716C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic_TypeDefinitionIndex = 19803;

	class HoYoChannelEpic : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__offerIdToEntitlementName()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelEpic_TypeDefinitionIndex)->GetStaticField(0xB060);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelEpic_TypeDefinitionIndex)->GetStaticField(0xB068);
		}
		::System::String* _accountId; // 0x10
		::System::Action_1<::System::String*>* _actionPayCallback; // 0x18
		::System::Boolean _isPaying; // 0x20
		::System::Boolean _isChannelDllAvailable; // 0x21
		::System::Boolean hasInit; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_INIT_OFFSET))(this);
		}

		::System::Boolean CheckLocalParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLOCALPARAMS_OFFSET))(this);
		}

		::System::Boolean CheckLaunchParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLAUNCHPARAMS_OFFSET))(this);
		}

		::System::Void OnAuthStatusChanged(::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAUTHSTATUSCHANGED_OFFSET))(this, result);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void CacheProducts(::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>* products)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CACHEPRODUCTS_OFFSET))(this, products);
		}

		::System::Void OnGetProductListSuccess(::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONArray* requestedProducts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, callback, requestedProducts);
		}

		::MiHoYo::SDK::PC::OS::ProductData* FindCachedProduct(::System::String* productId)
		{
			return ((::MiHoYo::SDK::PC::OS::ProductData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_FINDCACHEDPRODUCT_OFFSET))(this, productId);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, errorMsg);
		}

		::System::Void Pay(::System::String* jsonPayInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_PAY_OFFSET))(this, jsonPayInfo, callback);
		}

		::System::Void ExecuteCheckout(::MiHoYo::SDK::PC::OS::EpicPayInfo* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::EpicPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_EXECUTECHECKOUT_OFFSET))(this, payInfo);
		}

		::System::Void OnPaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYSUCCESS_OFFSET))(this);
		}

		::System::Void OnPayCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYCANCEL_OFFSET))(this);
		}

		::System::Void OnPayFail(::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYFAIL_OFFSET))(this, errorMsg);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETUSERID_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_LOGIN_OFFSET))(this, callback);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void ChangeSubChannelToOffical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHANGESUBCHANNELTOOFFICAL_OFFSET))(this);
		}

		static ::System::Void AppendIfMismatch(::System::Collections::Generic::List_1<::System::String*>* mismatches, ::System::String* field, ::System::String* mmkvValue, ::System::String* configValue)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_APPENDIFMISMATCH_OFFSET))(mismatches, field, mmkvValue, configValue);
		}

		::System::Void _Init_b__9_0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* productsResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__INIT_B__9_0_OFFSET))(this, productsResult);
		}

		::System::Void _CheckEntitlements_b__23_0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CHECKENTITLEMENTS_B__23_0_OFFSET))(this, result);
		}
	};
}
