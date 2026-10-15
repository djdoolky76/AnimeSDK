#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_CTOR_OFFSET UNITYSDK_OFFSET(0xC856430)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC85C660)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC85CA20)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC85CA80)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC85CA30)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC85C650)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_FightActivity_d__27_TypeDefinitionIndex = 61013;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
	class BattleResultProcess___RP_FightActivity_d__27 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::GameCore::BattleResultState state; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
