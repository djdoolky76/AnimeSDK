#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityUseInsertAbilityCheck; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA92990)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA92A80)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA92A30)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA929E0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_INIT_OFFSET UNITYSDK_OFFSET(0x1FA92910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseInsertAbilityCheck_TypeDefinitionIndex = 57976;

	class LevelEntityUseInsertAbilityCheck : public ::CMPGEAFHHDC
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::System::Boolean Silence; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseInsertAbilityCheck* Init(::ENGBNDIPDJL* a1)
		{
			return ((::RPG::GameCore::LevelEntityUseInsertAbilityCheck*(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITYCHECK_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
