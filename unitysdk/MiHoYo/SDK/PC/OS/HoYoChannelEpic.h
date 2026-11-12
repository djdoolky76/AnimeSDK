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

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_APPENDIFMISMATCH_OFFSET UNITYSDK_OFFSET(0x1D0AC6A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CACHEPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1D0AD900)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0AEFC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHANGESUBCHANNELTOOFFICAL_OFFSET UNITYSDK_OFFSET(0x1D0ABF10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1D0AEDB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLAUNCHPARAMS_OFFSET UNITYSDK_OFFSET(0x1D0ABFF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x1D0ABE50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AEF90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_EXECUTECHECKOUT_OFFSET UNITYSDK_OFFSET(0x1D0AE920)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_FINDCACHEDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1D0ADCA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D0AB1F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1D0AC8E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1D0AEE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_INIT_OFFSET UNITYSDK_OFFSET(0x1D0AB210)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_LOGIN_OFFSET UNITYSDK_OFFSET(0x1D0AEE90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1D0AEF80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D0AC850)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1D0ACEC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D0AD030)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x1D0AEC30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x1D0AE7B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D0AEAC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_PAY_OFFSET UNITYSDK_OFFSET(0x1D0ADFA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D0AB200)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CHECKENTITLEMENTS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1D0AF120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__INIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D0AF060)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic_TypeDefinitionIndex = 8528;

	class HoYoChannelEpic : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		::System::String* _accountId; // 0x10
		::System::Action_1<::System::String*>* _actionPayCallback; // 0x18
		::System::Boolean _isChannelDllAvailable; // 0x20
		::System::Boolean hasInit; // 0x21
		::System::Boolean _isPaying; // 0x22
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__offerIdToEntitlementName()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelEpic")->GetStaticField(0x110C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelEpic")->GetStaticField(0x110C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CCTOR_OFFSET))();
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

		::System::Void OnAuthStatusChanged(::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAUTHSTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void CacheProducts(::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CACHEPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListSuccess(::System::Action_1<::System::String*>* a1, ::MiHoYo::SDK::JSONArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::PC::OS::ProductData* FindCachedProduct(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::ProductData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_FINDCACHEDPRODUCT_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteCheckout(::MiHoYo::SDK::PC::OS::EpicPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::EpicPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_EXECUTECHECKOUT_OFFSET))(this, a1);
		}

		::System::Void OnPaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYSUCCESS_OFFSET))(this);
		}

		::System::Void OnPayCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYCANCEL_OFFSET))(this);
		}

		::System::Void OnPayFail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONPAYFAIL_OFFSET))(this, a1);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_GETUSERID_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_LOGIN_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void ChangeSubChannelToOffical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_CHANGESUBCHANNELTOOFFICAL_OFFSET))(this);
		}

		static ::System::Void AppendIfMismatch(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC_APPENDIFMISMATCH_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _Init_b__9_0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__INIT_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _CheckEntitlements_b__23_0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC__CHECKENTITLEMENTS_B__23_0_OFFSET))(this, a1);
		}

	};
}
