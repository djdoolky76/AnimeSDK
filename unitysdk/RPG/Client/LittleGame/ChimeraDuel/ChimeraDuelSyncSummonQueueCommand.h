#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMHFBHIAAL;
class ICCLDNDNHPD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelSummonChimeraDisplayData; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0xD419640)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD419AA0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_FLYTOSUMMONQUEUEFINISH_OFFSET UNITYSDK_OFFSET(0xD419B90)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0xD419C00)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelSyncSummonQueueCommand_TypeDefinitionIndex = 77665;

	class ChimeraDuelSyncSummonQueueCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::RPG::Client::Prop::DuelChimeraProxy* Caster; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelSummonChimeraDisplayData*>* EnemySummonQueue; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelSummonChimeraDisplayData*>* AllySummonQueue; // 0x28
		::System::Boolean _IsComplete; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 _CasterID; // 0x34
		::System::Void _ctor(::BFMHFBHIAAL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void FlyToSummonQueueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_FLYTOSUMMONQUEUEFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_TICK_OFFSET))(this, a1);
		}

	};
}
