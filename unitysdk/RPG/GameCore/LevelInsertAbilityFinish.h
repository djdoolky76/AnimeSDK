#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelInsertAbilityFinish; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6E8740)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E8860)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E8810)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E87C0)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xE6E8640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInsertAbilityFinish_TypeDefinitionIndex = 56834;

	class LevelInsertAbilityFinish : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* CasterEntity; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetList; // 0x20
		::System::String* InsertAbilityName; // 0x28
		::System::Boolean ShowInActionBar; // 0x30
		::System::Boolean Silence; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelInsertAbilityFinish* Init(::ENGBNDIPDJL* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::LevelInsertAbilityFinish*(*)(::PVOID, ::ENGBNDIPDJL*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
