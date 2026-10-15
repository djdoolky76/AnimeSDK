#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAE550)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BEB26B0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEB2BE0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEB2C40)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BEB2BF0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEB26A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__34_TypeDefinitionIndex = 8157;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
	class NetworkManager__Get_d__34 : public ::System::Object
	{
	public:
		::System::String* extHeaders; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Action_1<::System::String*>* callback; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0x38
		::System::String* _key_5__5; // 0x40
		::MiHoYo::SDK::JSONNode_KeyEnumerator __s__4; // 0x48
		::MiHoYo::SDK::JSONNode* _extHeaderNode_5__3; // 0x90
		::System::String* _queryString_5__2; // 0x98
		::System::String* requestUrl; // 0xA0
		::MiHoYo::SDK::JSONObject* query; // 0xA8
		::System::Single timeoutSecond; // 0xB0
		::System::Int32 retryTime; // 0xB4
		::System::Int32 __1__state; // 0xB8
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
