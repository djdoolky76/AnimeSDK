#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleResultProcess_ConfigItem; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_CTOR_OFFSET UNITYSDK_OFFSET(0xC855F10)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC85DA90)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC85DF20)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC85DF80)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC85DF30)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC85DA80)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_Pre_d__17_TypeDefinitionIndex = 61020;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class BattleResultProcess___RP_Pre_d__17 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::BattleResultProcess_ConfigItem* config; // 0x18
		::RPG::GameCore::TurnBasedGameMode* _pGameMode_5__2; // 0x20
		::System::Single _tWaitStart_5__3; // 0x28
		::System::Int32 __1__state; // 0x2C
		::RPG::GameCore::BattleResultState state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
