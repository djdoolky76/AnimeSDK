#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMEADFNHJBO;
namespace System { class Object; }

#define LMEADFNHJBO__SETMOVE_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0xC01B270)
#define LMEADFNHJBO__SETMOVE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC01B500)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC01B8E0)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC01B940)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC01B8F0)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC01B4F0)

inline static constexpr unsigned int LMEADFNHJBO__SetMove_d__3_TypeDefinitionIndex = 72738;

	template <typename T1, typename T2, typename T3>
	class LMEADFNHJBO__SetMove_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::LMEADFNHJBO* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Boolean isResting; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single _maxTime_5__2; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMEADFNHJBO__SETMOVE_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADFNHJBO__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADFNHJBO__SETMOVE_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
