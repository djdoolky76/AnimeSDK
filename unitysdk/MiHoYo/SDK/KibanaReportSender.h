#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class KibanaReportSender; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOCACHE_OFFSET UNITYSDK_OFFSET(0xAFB9900)
#define MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOTEMPCACHE_OFFSET UNITYSDK_OFFSET(0xAFB9CF0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_CTOR_OFFSET UNITYSDK_OFFSET(0xAFB9150)
#define MIHOYO_SDK_KIBANAREPORTSENDER_ENCODEREPORTANDSEND_OFFSET UNITYSDK_OFFSET(0xAFBA2B0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_HTTPREQUESTTIMER_OFFSET UNITYSDK_OFFSET(0xAFB9390)
#define MIHOYO_SDK_KIBANAREPORTSENDER_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAFB93E0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_LOOP_OFFSET UNITYSDK_OFFSET(0xAFBA0F0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_PERFORMPOSTTASK_OFFSET UNITYSDK_OFFSET(0xAFBAAE0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0xAFBA8A0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_SENDTOKIBANA_OFFSET UNITYSDK_OFFSET(0xAFB9460)
#define MIHOYO_SDK_KIBANAREPORTSENDER__ENCODEREPORTANDSEND_B__17_0_OFFSET UNITYSDK_OFFSET(0xAFBAB80)

namespace MiHoYo::SDK
{
	class KibanaReportSender : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _reportCache; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _reportCacheTemp; // 0x18
		::System::Boolean _isSending; // 0x20
		static ::MiHoYo::SDK::KibanaReportSender** StaticGet__instance()
		{
			return (::MiHoYo::SDK::KibanaReportSender**)UnitySDK::FromName("MiHoYo.SDK", "KibanaReportSender")->GetStaticField(0x250E0);
		}

		// static const ::System::Object DEFAULT_MAX_COUNT; // 0x0
		// static const ::System::String* TELEMETRY_VERSION; // 0x0
		// static const ::System::String* SDK_VERSION; // 0x0
		// static const ::System::String* AREA; // 0x0
		// static const ::System::String* LIFECYCLE_ID; // 0x0
		// static const ::System::Object TIME_INTERVAL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::KibanaReportSender* Instance()
		{
			return ((::MiHoYo::SDK::KibanaReportSender*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_INSTANCE_OFFSET))();
		}

		::System::Void SendToKibana(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_SENDTOKIBANA_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* HTTPRequestTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_HTTPREQUESTTIMER_OFFSET))(this);
		}

		::System::Void Loop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_LOOP_OFFSET))(this);
		}

		::System::Void AddToCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void AddToTempCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOTEMPCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void EncodeReportAndSend(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ENCODEREPORTANDSEND_OFFSET))(this, a1, a2);
		}

		::System::Void PostRequest(::System::String* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_POSTREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* PerformPostTask(::System::String* a1, ::System::String* a2, ::System::Action* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_PERFORMPOSTTASK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _EncodeReportAndSend_b__17_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__ENCODEREPORTANDSEND_B__17_0_OFFSET))(this, a1);
		}

	};
}
