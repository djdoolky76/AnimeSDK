#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F7A80)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0xE6F7B30)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F7AE0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F7A90)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xE6F7B70)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_GET_TURNINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xE6F7BB0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLEND_SET_TURNINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0xE6F7BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillEnd_TypeDefinitionIndex = 56725;

	class LevelTurnUltraSkillEnd : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _CastEntity; // 0x10
		::DEKDEPEBHNC* _TurnInsertUltraSkillParams_k__BackingField; // 0x18
		::System::UInt32 _TurnCounter; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::DEKDEPEBHNC* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::DEKDEPEBHNC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETCASTENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GETTURNCOUNTER_OFFSET))(this);
		}

		::DEKDEPEBHNC* get_TurnInsertUltraSkillParams()
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_GET_TURNINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

		::System::Void set_TurnInsertUltraSkillParams(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLEND_SET_TURNINSERTULTRASKILLPARAMS_OFFSET))(this, a1);
		}

	};
}
