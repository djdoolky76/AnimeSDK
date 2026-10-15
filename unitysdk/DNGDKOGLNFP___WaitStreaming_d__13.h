#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGDKOGLNFP;
namespace RPG::Client { class Stage; }
namespace System { class Object; }

#define DNGDKOGLNFP___WAITSTREAMING_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x1194C990)
#define DNGDKOGLNFP___WAITSTREAMING_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1194D2C0)
#define DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1194D4A0)
#define DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1194D500)
#define DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1194D4B0)
#define DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194D2B0)

inline static constexpr unsigned int DNGDKOGLNFP___WaitStreaming_d__13_TypeDefinitionIndex = 60537;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class DNGDKOGLNFP___WaitStreaming_d__13 : public ::System::Object
	{
	public:
		::DNGDKOGLNFP* __4__this; // 0x10
		::RPG::Client::Stage* _stage_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITSTREAMING_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITSTREAMING_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITSTREAMING_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
