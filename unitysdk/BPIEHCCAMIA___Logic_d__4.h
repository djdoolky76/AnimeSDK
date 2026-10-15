#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPIEHCCAMIA;
class EOABGMGNKGA;
namespace System { class Action; }
namespace System { class Object; }

#define BPIEHCCAMIA___LOGIC_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A66A0)
#define BPIEHCCAMIA___LOGIC_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC1A66C0)
#define BPIEHCCAMIA___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC1A6C40)
#define BPIEHCCAMIA___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC1A6CA0)
#define BPIEHCCAMIA___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC1A6C50)
#define BPIEHCCAMIA___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A66B0)

inline static constexpr unsigned int BPIEHCCAMIA___Logic_d__4_TypeDefinitionIndex = 60883;

	template <typename T1, typename T2, typename T3, typename T4>
	class BPIEHCCAMIA___Logic_d__4 : public ::System::Object
	{
	public:
		::BPIEHCCAMIA* __4__this; // 0x10
		::System::Action* onBeforeDispose; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single delaySeconds; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPIEHCCAMIA___LOGIC_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA___LOGIC_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
