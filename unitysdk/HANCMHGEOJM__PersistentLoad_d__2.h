#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANCMHGEOJM;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define HANCMHGEOJM__PERSISTENTLOAD_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0x15B8BC80)
#define HANCMHGEOJM__PERSISTENTLOAD_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15B8CC20)
#define HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B8CE70)
#define HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B8CED0)
#define HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15B8CE80)
#define HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B8CC10)

inline static constexpr unsigned int HANCMHGEOJM__PersistentLoad_d__2_TypeDefinitionIndex = 73885;

	template <typename T1, typename T2>
	class HANCMHGEOJM__PersistentLoad_d__2 : public ::System::Object
	{
	public:
		::HANCMHGEOJM* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::IEnumerator* _iter_5__2; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HANCMHGEOJM__PERSISTENTLOAD_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM__PERSISTENTLOAD_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
