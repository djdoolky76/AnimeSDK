#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMIKHDAIIMO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define BMIKHDAIIMO__PERSISTENTLOAD_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x1A74FC40)
#define BMIKHDAIIMO__PERSISTENTLOAD_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A74FC60)
#define BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A750070)
#define BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A7500D0)
#define BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A750080)
#define BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A74FC50)

inline static constexpr unsigned int BMIKHDAIIMO__PersistentLoad_d__8_TypeDefinitionIndex = 76008;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class BMIKHDAIIMO__PersistentLoad_d__8 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::IEnumerator* _iter_5__2; // 0x18
		::BMIKHDAIIMO* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO__PERSISTENTLOAD_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO__PERSISTENTLOAD_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
