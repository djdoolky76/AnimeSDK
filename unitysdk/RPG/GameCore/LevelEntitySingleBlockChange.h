#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntitySingleBlockChange; }

#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1EFEC0)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xF1EFFB0)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1EFF60)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1EFF10)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xF1EFE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySingleBlockChange_TypeDefinitionIndex = 58063;

	class LevelEntitySingleBlockChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::CHMCAGBDPJH ChangeParams; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySingleBlockChange* Init(::RPG::GameCore::GameEntity* a1, ::CHMCAGBDPJH a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntitySingleBlockChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
