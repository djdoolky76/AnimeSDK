#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBFMNBKPKAL;
namespace System { class Object; }
namespace UnityEngine { class WWW; }

#define DBFMNBKPKAL__ASYNCGETLATENCY_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD70E0)
#define DBFMNBKPKAL__ASYNCGETLATENCY_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDFD7100)
#define DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDFD7400)
#define DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDFD7460)
#define DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDFD7410)
#define DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFD70F0)

inline static constexpr unsigned int DBFMNBKPKAL__AsyncGetLatency_d__1_TypeDefinitionIndex = 69343;

	template <typename T>
	class DBFMNBKPKAL__AsyncGetLatency_d__1 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::WWW* _request_5__3; // 0x18
		::DBFMNBKPKAL* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single _startTime_5__2; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBFMNBKPKAL__ASYNCGETLATENCY_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFMNBKPKAL__ASYNCGETLATENCY_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFMNBKPKAL__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
