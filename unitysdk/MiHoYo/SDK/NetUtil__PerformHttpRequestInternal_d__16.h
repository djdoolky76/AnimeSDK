#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class INetworkInterceptor; }
namespace MiHoYo::SDK { class NetUtil_ResponseCallback; }
namespace MiHoYo::SDK { class NetUtil_ResponseModel; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC259A0)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC27010)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC27070)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DC27020)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC25990)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC249B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil__PerformHttpRequestInternal_d__16_TypeDefinitionIndex = 19448;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	class NetUtil__PerformHttpRequestInternal_d__16 : public ::System::Object
	{
	public:
		::System::String* _downloadMD5_5__18; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x18
		::System::String* _errorMsg_5__13; // 0x20
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__11; // 0x28
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__6; // 0x30
		::System::Object* __s__10; // 0x38
		::System::Byte _padding0[0x10];
		::System::String* _responseString_5__21; // 0x50
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__15; // 0x58
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__23; // 0x60
		::System::String* _value_5__9; // 0x68
		::MiHoYo::SDK::NetUtil_ResponseCallback* responseCallback; // 0x70
		::System::String* _key_5__8; // 0x78
		::System::Object* __2__current; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _responseHeaders_5__20; // 0x88
		::System::String* _targetMD5_5__17; // 0x90
		::System::Exception* _ex_5__24; // 0x98
		::System::Object* __s__22; // 0xA0
		::System::Byte _padding1[0x10];
		::System::String* url; // 0xB8
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__14; // 0xC0
		::System::Action* timeoutCallback; // 0xC8
		::System::Object* __s__5; // 0xD0
		::System::Byte _padding2[0x10];
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__19; // 0xE8
		::System::String* _processedUrl_5__3; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict; // 0xF8
		::UnityEngine::Networking::UnityWebRequest* _request_5__4; // 0x100
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__16; // 0x108
		::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x110
		::System::Object* __s__7; // 0x118
		::System::Byte _padding3[0x10];
		::System::Int32 retryLimit; // 0x130
		::System::Int32 __1__state; // 0x134
		::System::Int32 _leftRetryCount_5__2; // 0x138
		::System::Int32 _delayTimeMs_5__1; // 0x13C
		::System::Single timeoutSecond; // 0x140
		::System::Boolean checkMD5; // 0x144
		::System::Byte _padding4[0x3];
		::System::Int64 _responseCode_5__12; // 0x148

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
