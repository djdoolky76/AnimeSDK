#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBOLNDGHCBB;
namespace System { class Object; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0x15E39FB0)
#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15E3A910)
#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E3ADE0)
#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E3AE40)
#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15E3ADF0)
#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E3A8B0)
#define IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15E3A8F0)

inline static constexpr unsigned int IBOLNDGHCBB__SendErrorToDebugPlatform_d__20_TypeDefinitionIndex = 60994;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class IBOLNDGHCBB__SendErrorToDebugPlatform_d__20 : public ::System::Object
	{
	public:
		::IBOLNDGHCBB* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::UInt32 battle_id; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB__SENDERRORTODEBUGPLATFORM_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
