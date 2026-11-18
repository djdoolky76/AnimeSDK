#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class RichTapToolManager;

#define RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F626500)
#define RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F6265A0)
#define RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F626600)
#define RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F6265B0)
#define RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6264F0)
#define RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1F625B40)

inline static constexpr unsigned int RichTapToolManager__ObservingFileChanges_d__13_TypeDefinitionIndex = 36740;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
class RichTapToolManager__ObservingFileChanges_d__13 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::RichTapToolManager* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__OBSERVINGFILECHANGES_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
