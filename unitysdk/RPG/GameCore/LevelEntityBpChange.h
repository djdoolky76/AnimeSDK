#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityBpChange; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYBPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6E19C0)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E1AB0)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E1A60)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E1A10)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6E1950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBpChange_TypeDefinitionIndex = 56743;

	class LevelEntityBpChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* EntityRef; // 0x18
		::System::String* Reason; // 0x20
		::System::Int32 BPChange; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityBpChange* Init(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::LevelEntityBpChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
