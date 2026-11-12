#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWWForm; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0xC134A10)
#define MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC134C40)
#define MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC1353E0)
#define MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC135440)
#define MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC1353F0)
#define MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC134C30)

inline static constexpr unsigned int MCMJPGLJEAD__WWWRequestWithRetry_d__0_TypeDefinitionIndex = 50745;

	class MCMJPGLJEAD__WWWRequestWithRetry_d__0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x18
		::System::String* jsonBody; // 0x20
		::System::Action* timeOutCallback; // 0x28
		::UnityEngine::WWWForm* _wwwForm_5__4; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _localWWW_5__3; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* formDict; // 0x40
		::System::Object* __2__current; // 0x48
		::System::Action_1<::System::String*>* callback; // 0x50
		::System::Single timeoutSecond; // 0x58
		::System::Int32 retryTime; // 0x5C
		::System::Int32 __1__state; // 0x60
		::System::Boolean _timeout_5__5; // 0x64
		::System::Byte _padding0[0x3];
		::System::Int32 _counter_5__2; // 0x68
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJPGLJEAD__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
