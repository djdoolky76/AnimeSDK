#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NetworkManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_CTOR_OFFSET UNITYSDK_OFFSET(0xD9C72B0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD9C7330)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD9C7940)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD9C79A0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD9C7950)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9C72C0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD9C7310)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager__RequestGlobalDispatch_d__58_TypeDefinitionIndex = 69378;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58>
	class NetworkManager__RequestGlobalDispatch_d__58 : public ::System::Object
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _request_5__10; // 0x10
		::Il2CppArray<::System::String*>* __7__wrap6; // 0x18
		::System::Action_1<::System::Boolean>* callback; // 0x20
		::System::String* _url_5__9; // 0x28
		::System::String* _errMsg_5__6; // 0x30
		::System::Object* __2__current; // 0x38
		::RPG::Client::NetworkManager* __4__this; // 0x40
		::System::String* _requestUrl_5__4; // 0x48
		::System::Boolean forceSelect; // 0x50
		::System::Boolean _result_5__3; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x54
		::System::Int32 _tryIndex_5__2; // 0x58
		::System::Int32 __7__wrap7; // 0x5C
		::System::Int32 _responseCode_5__5; // 0x60
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
