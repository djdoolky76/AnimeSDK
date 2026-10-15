#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDLDHDMLJDH;
namespace System { class Object; }

#define EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_CTOR_OFFSET UNITYSDK_OFFSET(0x13329490)
#define EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1332A260)
#define EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1332A4B0)
#define EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1332A510)
#define EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1332A4C0)
#define EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1332A250)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
	class EDLDHDMLJDH___ElapseBetweenLeaderChangeProtect_d__27 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::EDLDHDMLJDH* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH___ELAPSEBETWEENLEADERCHANGEPROTECT_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
