#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDAJDLAHNC;
namespace RPG::Client { class TeamManager; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0xE1D3260)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE1DD980)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1DDD10)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1DDD70)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE1DDD20)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE1DD970)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___CreateLeaderMemberEntity_d__20_TypeDefinitionIndex = 60787;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class TeamManager___CreateLeaderMemberEntity_d__20 : public ::System::Object
	{
	public:
		::System::Action* onAsyncLoadFinish; // 0x10
		::NNDAJDLAHNC* __2__current; // 0x18
		::RPG::Client::TeamManager* __4__this; // 0x20
		::System::Boolean bAsyncLoad; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
