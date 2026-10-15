#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__POST_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEADE60)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BEB44A0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEB4950)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEB49B0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BEB4960)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEB4490)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Post_d__23_TypeDefinitionIndex = 8146;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class NetworkManager__Post_d__23 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::JSONNode_KeyEnumerator __s__3; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x60
		::System::String* requestUrl; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0x70
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x78
		::MiHoYo::SDK::JSONNode* _extHeaderNode_5__2; // 0x80
		::System::String* _key_5__4; // 0x88
		::System::String* extHeaders; // 0x90
		::System::String* bodyString; // 0x98
		::System::Action* timeoutCallback; // 0xA0
		::System::Int32 retryTime; // 0xA8
		::System::Single timeoutSecond; // 0xAC
		::System::Int32 __1__state; // 0xB0
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
