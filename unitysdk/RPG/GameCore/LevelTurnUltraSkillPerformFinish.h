#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnUltraSkillPerformFinish; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0xE6ED460)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xE6ED410)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6ED380)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xE6ED3D0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ED330)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xE6ED2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillPerformFinish_TypeDefinitionIndex = 56721;

	class LevelTurnUltraSkillPerformFinish : public ::CMPGEAFHHDC
	{
	public:
		::DEKDEPEBHNC* _InsertUltraSkillParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillPerformFinish* Init(::DEKDEPEBHNC* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillPerformFinish*(*)(::PVOID, ::DEKDEPEBHNC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_INIT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::DEKDEPEBHNC* GetInsertUltraSkillParams()
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPERFORMFINISH_GETACTIVEENTITY_OFFSET))(this);
		}

	};
}
