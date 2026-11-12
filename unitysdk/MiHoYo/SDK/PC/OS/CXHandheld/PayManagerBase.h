#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldProduct.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerBase; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CONVERTTOHANDHELDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1D090810)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D08F850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D090830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1D08D6C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x1D090670)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1D08D9E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x1D08E1F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1D08E630)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D08D550)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_JOINQUERYPRODUCTARRAY_OFFSET UNITYSDK_OFFSET(0x1D08E870)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1D0904E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1D08DCB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D08FA20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1D08FDF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1D08F4C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D090170)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D090640)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PAY_OFFSET UNITYSDK_OFFSET(0x1D08EA10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1D08F830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1D08D760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1D08D770)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerBase_TypeDefinitionIndex = 8773;

	class PayManagerBase : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* payCallback; // 0x10
		::System::Action_1<::System::String*>* productsCallback; // 0x18
		::System::String* payLifecycleId; // 0x20
		::System::String* productId; // 0x28
		::System::Action_1<::System::String*>* priceTierCallback; // 0x30
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct purchasingProduct; // 0x38
		::System::String* deliveryURL; // 0x68
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x70
		::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* cacheProducts; // 0x78
		::System::String* countryCode; // 0x80
		::Il2CppArray<::System::String*>* queryProductArray; // 0x88
		::MiHoYo::SDK::EnvType _envType; // 0x90
		::System::Boolean isGettingProducts; // 0x94
		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "PayManagerBase")->GetStaticField(0xE690);
		}

		static ::MiHoYo::SDK::ReportType* StaticGet_HandheldReportType()
		{
			return (::MiHoYo::SDK::ReportType*)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "PayManagerBase")->GetStaticField(0x2FD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::System::Void RefreshProductsCache(::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts_1(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PREMIUMPAY_OFFSET))(this, a1);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRICETIER_OFFSET))(this, a1);
		}

		::System::Void OnPriceTierCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET))(this, a1);
		}

		::System::String* GetCurrentContryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET))(this);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::String* JoinQueryProductArray()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_JOINQUERYPRODUCTARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct ConvertToHandheldProduct(::MiHoYo::SDK::PS::PayManager_PSProduct a1)
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CONVERTTOHANDHELDPRODUCT_OFFSET))(this, a1);
		}

	};
}
