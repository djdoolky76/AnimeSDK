#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_CallbackType.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoChannelGameplayServices; }
namespace MiHoYo::SDK { class HoYoChannelOnlineServices; }
namespace MiHoYo::SDK { class HoYoChannelSocialServices; }
namespace MiHoYo::SDK { class HoYoChannelSystemFunctions; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthStatusResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGameOverlayResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInitResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelMicroTxnResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class ManualResetEvent; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0xB5F0010)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5F9900)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0xB5F2C20)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0xB5F1D70)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0xB5EC640)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET UNITYSDK_OFFSET(0xB5F3AD0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_GAMEPLAYSERVICES_OFFSET UNITYSDK_OFFSET(0xB5CE8C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_ONLINESERVICES_OFFSET UNITYSDK_OFFSET(0xB5CE6B0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SOCIAL_OFFSET UNITYSDK_OFFSET(0xB5CE810)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SYSTEMINTERFACE_OFFSET UNITYSDK_OFFSET(0xB5CE760)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0xB5EF340)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0xB5E9BA0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0xB5EF8C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHSTATUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EBCE0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EA4D0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EAD70)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EB610)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EB1C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EBBA0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E9EF0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EA080)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EBA60)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EA920)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_ONQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5EBE20)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET UNITYSDK_OFFSET(0xB5F0EC0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_QUERY_OFFSET UNITYSDK_OFFSET(0xB5F9330)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERAUTHSTATUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5F4FC0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5F4CA0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5F4980)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET UNITYSDK_OFFSET(0xB5EBFE0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET UNITYSDK_OFFSET(0xB5EC470)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5D3210)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface_TypeDefinitionIndex = 47551;

	class HoYoChannelInterface : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_entitlementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C030);
		}

		static ::System::Threading::ManualResetEvent** StaticGet_s_waitHandle()
		{
			return (::System::Threading::ManualResetEvent**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C038);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>** StaticGet_s_consumeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C040);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_productsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C048);
		}

		static ::System::Threading::ManualResetEvent** StaticGet_s_queryWaitHandle()
		{
			return (::System::Threading::ManualResetEvent**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C050);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_loginTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C058);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkoutTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C060);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>** StaticGet_s_productsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C068);
		}

		static ::MiHoYo::SDK::HoYoChannelSystemFunctions** StaticGet_s_systemInterface()
		{
			return (::MiHoYo::SDK::HoYoChannelSystemFunctions**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C070);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>** StaticGet_s_microTxnCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C078);
		}

		static ::MiHoYo::SDK::HoYoChannelGameplayServices** StaticGet_s_gameplayServices()
		{
			return (::MiHoYo::SDK::HoYoChannelGameplayServices**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C080);
		}

		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C088);
		}

		static ::System::Object** StaticGet_s_entitlementsLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C090);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_consumeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C098);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>** StaticGet_s_checkoutCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_authTokenTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0A8);
		}

		static ::System::Object** StaticGet_s_consumeLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0B0);
		}

		static ::System::Object** StaticGet_s_productsLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>** StaticGet_s_entitlementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0C0);
		}

		static ::System::Object** StaticGet_s_checkoutLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>** StaticGet_s_loginCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0D0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult** StaticGet_s_queryResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>** StaticGet_s_authTokenCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0E0);
		}

		static ::MiHoYo::SDK::HoYoChannelOnlineServices** StaticGet_s_onlineServices()
		{
			return (::MiHoYo::SDK::HoYoChannelOnlineServices**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0E8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult** StaticGet_s_initResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelInitResult**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0F0);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>** StaticGet_s_gameOverlayCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C0F8);
		}

		static ::MiHoYo::SDK::HoYoChannelSocialServices** StaticGet_s_social()
		{
			return (::MiHoYo::SDK::HoYoChannelSocialServices**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C100);
		}

		static ::System::Object** StaticGet_s_authTokenLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C108);
		}

		static ::System::Object** StaticGet_s_loginLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C110);
		}

		static ::System::Object** StaticGet_s_queryLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C118);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>** StaticGet_s_authStatusCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x1C120);
		}

		static ::System::Single* StaticGet__hoYoChannelNextTick()
		{
			return (::System::Single*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x5BC0);
		}

		static ::System::Boolean* StaticGet__useHoYoChannel()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x5BC4);
		}

		static ::System::Boolean* StaticGet_s_authStatusRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x5BC5);
		}

		static ::System::Boolean* StaticGet_s_gameOverlayRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x5BC6);
		}

		static ::System::Boolean* StaticGet_s_microTxnRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x5BC7);
		}

		static ::System::Single* StaticGet__hoYoChannelNextCleanupTime()
		{
			return (::System::Single*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelInterface")->GetStaticField(0x5BC8);
		}

		// static const ::System::Object TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object TIMEOUT_CHECKOUT_SECONDS; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelOnlineServices* get_OnlineServices()
		{
			return ((::MiHoYo::SDK::HoYoChannelOnlineServices*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_ONLINESERVICES_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelSocialServices* get_Social()
		{
			return ((::MiHoYo::SDK::HoYoChannelSocialServices*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SOCIAL_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelSystemFunctions* get_SystemInterface()
		{
			return ((::MiHoYo::SDK::HoYoChannelSystemFunctions*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_SYSTEMINTERFACE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoChannelGameplayServices* get_GameplayServices()
		{
			return ((::MiHoYo::SDK::HoYoChannelGameplayServices*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_GET_GAMEPLAYSERVICES_OFFSET))();
		}

		static ::System::Void Setup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_SETUP_OFFSET))();
		}

		static ::System::Void LogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogLevel a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_TICK_OFFSET))();
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelInitResult* Init(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelInitResult*(*)(::MiHoYo::SDK::PC::OS::HoYoChannelInitModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_INIT_OFFSET))(a1);
		}

		static ::System::Void OnInitCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONINITCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Login(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelLoginParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_LOGIN_OFFSET))(a1, a2);
		}

		static ::System::Void OnLoginCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONLOGINCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void AuthToken(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_AUTHTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Void OnAuthTokenCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHTOKENCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Products(::MiHoYo::SDK::PC::OS::HoYoChannelProductsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelProductsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_PRODUCTS_OFFSET))(a1, a2);
		}

		static ::System::Void OnProductsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONPRODUCTSCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Checkout(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKOUT_OFFSET))(a1, a2);
		}

		static ::System::Void OnCheckoutCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCHECKOUTCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CheckEntitlements(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CHECKENTITLEMENTS_OFFSET))(a1, a2);
		}

		static ::System::Void OnEntitlementsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONENTITLEMENTSCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void Consume(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CONSUME_OFFSET))(a1, a2);
		}

		static ::System::Void OnConsumeCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONCONSUMECALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterMicroTxnCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERMICROTXNCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterGameOverlayCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERGAMEOVERLAYCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterAuthStatusChangedCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthStatusResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_REGISTERAUTHSTATUSCHANGEDCALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterCallback(::MiHoYo::SDK::HoYoChannelSDK_CallbackType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_CallbackType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_UNREGISTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void OnMicroTxnCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONMICROTXNCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void OnGameOverlayCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONGAMEOVERLAYCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void OnAuthStatusChangedCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONAUTHSTATUSCHANGEDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Query(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_QUERY_OFFSET))(a1);
		}

		static ::System::Void OnQueryCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE_ONQUERYCALLBACK_OFFSET))(a1, a2);
		}

	};
}
