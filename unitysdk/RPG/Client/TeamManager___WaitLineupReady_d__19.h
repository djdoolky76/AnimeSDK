#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDAJDLAHNC;
namespace System { class Object; }

#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0xE1D3250)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE1DE000)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1DE0F0)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1DE150)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE1DE100)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE1DDFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___WaitLineupReady_d__19_TypeDefinitionIndex = 60789;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class TeamManager___WaitLineupReady_d__19 : public ::System::Object
	{
	public:
		::NNDAJDLAHNC* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single _tStart_5__2; // 0x1C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
