#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LocalNavMeshBuilder;

#define LOCALNAVMESHBUILDER__START_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A62FA20)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A62FA70)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A62FAD0)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A62FA80)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A62FA10)
#define LOCALNAVMESHBUILDER__START_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62FA00)

inline static constexpr unsigned int LocalNavMeshBuilder__Start_d__6_TypeDefinitionIndex = 91819;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class LocalNavMeshBuilder__Start_d__6 : public ::System::Object
{
public:
	::LocalNavMeshBuilder* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
