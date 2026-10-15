#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelEntityUseInsertAbility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6E3420)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E3510)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E34C0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E3470)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xE6E3380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseInsertAbility_TypeDefinitionIndex = 56754;

	class LevelEntityUseInsertAbility : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AbilityTargetList; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CustomFlags; // 0x28
		::System::String* AbilityName; // 0x30
		::System::Boolean Silence; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseInsertAbility* Init(::ENGBNDIPDJL* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a3)
		{
			return ((::RPG::GameCore::LevelEntityUseInsertAbility*(*)(::PVOID, ::ENGBNDIPDJL*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
