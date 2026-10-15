#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABKDGPJEFI_OEJJCPPNNGH;
namespace System { class Object; }

#define IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFD480)
#define IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15DFD800)
#define IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DFD990)
#define IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DFD9F0)
#define IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15DFD9A0)
#define IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DFD7F0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class IABKDGPJEFI_OEJJCPPNNGH___WaitReady_d__7 : public ::System::Object
	{
	public:
		::IABKDGPJEFI_OEJJCPPNNGH* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___WAITREADY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
