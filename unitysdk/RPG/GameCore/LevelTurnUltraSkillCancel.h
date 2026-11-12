#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1F9D60)
#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F9EE0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xF1F9E90)
#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F9E00)
#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xF1F9E50)
#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F9DB0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_INIT_OFFSET UNITYSDK_OFFSET(0xF1F9D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillCancel_TypeDefinitionIndex = 57947;

	class LevelTurnUltraSkillCancel : public ::CMPGEAFHHDC
	{
	public:
		::DEKDEPEBHNC* _InsertUltraSkillParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillCancel* Init(::DEKDEPEBHNC* a1)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillCancel*(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETEVENTTYPE_OFFSET))(this);
		}

		::DEKDEPEBHNC* GetInsertUltraSkillParams()
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLCANCEL_GETACTIVEENTITY_OFFSET))(this);
		}

	};
}
