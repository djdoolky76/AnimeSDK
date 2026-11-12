#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnUltraSkillWaitOrder; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_CTOR_OFFSET UNITYSDK_OFFSET(0xF1FAAD0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xF1FA9A0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETDISABLEREADYCAMERA_OFFSET UNITYSDK_OFFSET(0xF1FAA70)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1FA910)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xF1FA960)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1FA8C0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xF1FA9F0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF1FAA30)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GET_ACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xF1FAAB0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_INIT_OFFSET UNITYSDK_OFFSET(0xF1FA840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillWaitOrder_TypeDefinitionIndex = 57946;

	class LevelTurnUltraSkillWaitOrder : public ::CMPGEAFHHDC
	{
	public:
		::DEKDEPEBHNC* _InsertUltraSkillParams; // 0x18
		::System::UInt32 _TurnCounter; // 0x20
		::System::Boolean _DisableReadyCamera; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TurnState _TurnState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillWaitOrder* Init(::DEKDEPEBHNC* a1, ::System::UInt32 a2, ::RPG::GameCore::TurnState a3)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillWaitOrder*(*)(::PVOID, ::DEKDEPEBHNC*, ::System::UInt32, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETEVENTTYPE_OFFSET))(this);
		}

		::DEKDEPEBHNC* GetInsertUltraSkillParams()
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETTURNCOUNTER_OFFSET))(this);
		}

		::RPG::GameCore::TurnState GetTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETTURNSTATE_OFFSET))(this);
		}

		::System::Boolean GetDisableReadyCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GETDISABLEREADYCAMERA_OFFSET))(this);
		}

		::RPG::GameCore::InsertActionType get_ActionType()
		{
			return ((::RPG::GameCore::InsertActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLWAITORDER_GET_ACTIONTYPE_OFFSET))(this);
		}

	};
}
