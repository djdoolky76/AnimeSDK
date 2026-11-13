#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMEADFNHJBO;
namespace System { class Object; }

#define LMEADFNHJBO__SETMOVE_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC4B40)
#define LMEADFNHJBO__SETMOVE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AFC4DD0)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AFC51B0)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AFC5210)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AFC51C0)
#define LMEADFNHJBO__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFC4DC0)

inline static constexpr unsigned int LMEADFNHJBO__SetMove_d__3_TypeDefinitionIndex = 72738;

	template <typename T1, typename T2, typename T3>
	class LMEADFNHJBO__SetMove_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::LMEADFNHJBO* __4__this; // 0x18
		::System::Boolean isResting; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x24
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
