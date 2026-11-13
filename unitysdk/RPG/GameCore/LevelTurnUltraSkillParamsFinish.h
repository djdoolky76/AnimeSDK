#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class LevelTurnUltraSkillParamsFinish; }

#define RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9C600)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA9C570)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_GETINSERTULTRASKILLPARAMS_OFFSET UNITYSDK_OFFSET(0x1FA9C5C0)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA9C520)
#define RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_INIT_OFFSET UNITYSDK_OFFSET(0x1FA9C4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnUltraSkillParamsFinish_TypeDefinitionIndex = 57944;

	class LevelTurnUltraSkillParamsFinish : public ::CMPGEAFHHDC
	{
	public:
		::DEKDEPEBHNC* _InsertUltraSkillParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnUltraSkillParamsFinish* Init(::DEKDEPEBHNC* a1)
		{
			return ((::RPG::GameCore::LevelTurnUltraSkillParamsFinish*(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::DEKDEPEBHNC* GetInsertUltraSkillParams()
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNULTRASKILLPARAMSFINISH_GETINSERTULTRASKILLPARAMS_OFFSET))(this);
		}

	};
}
