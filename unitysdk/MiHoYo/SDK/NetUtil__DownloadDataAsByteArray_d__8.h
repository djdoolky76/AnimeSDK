#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetUtil_ResponseModel; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA64E0)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BEA9140)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEA9590)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEA95F0)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BEA95A0)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEA9130)

namespace MiHoYo::SDK
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class NetUtil__DownloadDataAsByteArray_d__8 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Exception* _e_5__3; // 0x18
		::System::Action* completed; // 0x20
		::System::String* method; // 0x28
		::UnityEngine::Networking::UnityWebRequest* _request_5__1; // 0x30
		::System::Object* __2__current; // 0x38
		::MiHoYo::SDK::NetUtil_ResponseModel* _result_5__2; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
