#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"
class JLJCPILKAEG;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleState; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xE70B960)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_CTOR_OFFSET UNITYSDK_OFFSET(0xE7031E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE704220)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_EXIT_OFFSET UNITYSDK_OFFSET(0xE7099E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GETSTATE_OFFSET UNITYSDK_OFFSET(0xE70BBC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xE70B940)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_INIT_OFFSET UNITYSDK_OFFSET(0xE703440)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE703A30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_RELEASE_OFFSET UNITYSDK_OFFSET(0xE70BA40)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xE70B950)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_START_OFFSET UNITYSDK_OFFSET(0xE705300)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xE7096A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleStateMachine_TypeDefinitionIndex = 81043;

	class ChimeraDuelMainPuzzleStateMachine : public ::System::Object
	{
	public:
		::System::Action* _ExitHandler; // 0x10
		::System::Collections::Generic::SortedDictionary_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType, ::RPG::Client::Prop::IChimeraDuelMainPuzzleState*>* _States; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType>* _LocksBeforeAutoExit; // 0x20
		::RPG::Client::Prop::IChimeraDuelMainPuzzleState* _CurrentState_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleState* get_CurrentState()
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::Prop::IChimeraDuelMainPuzzleState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::System::Void Init(::JLJCPILKAEG* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JLJCPILKAEG*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareOnStartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_PREPAREONSTARTPUZZLE_OFFSET))(this);
		}

		::System::Void Start(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_START_OFFSET))(this, a1);
		}

		::System::Void SwitchTo(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SWITCHTO_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_EXIT_OFFSET))(this);
		}

		::System::Void Acquire(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_ACQUIRE_OFFSET))(this, a1);
		}

		::System::Void Release(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_RELEASE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleState* GetState(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleState*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GETSTATE_OFFSET))(this, a1);
		}

	};
}
