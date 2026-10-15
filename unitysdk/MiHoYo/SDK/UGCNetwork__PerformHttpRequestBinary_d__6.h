#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0xB063D80)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB064050)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB0652B0)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB065310)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB0652C0)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB064040)

namespace MiHoYo::SDK
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class UGCNetwork__PerformHttpRequestBinary_d__6 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict; // 0x20
		::System::Action* completeCallback; // 0x28
		::UnityEngine::Networking::UnityWebRequest* _request_5__4; // 0x30
		::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean checkMD5; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Int32 _leftRetryCount_5__3; // 0x50
		::System::Int32 retryLimit; // 0x54
		::System::Int32 _delayTimeMs_5__2; // 0x58
		::System::Single timeoutSecond; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
