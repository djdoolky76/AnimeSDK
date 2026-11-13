#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLoseHPByRatio; }

#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA98490)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA98440)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA983F0)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_INIT_OFFSET UNITYSDK_OFFSET(0x1FA98380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLoseHPByRatio_TypeDefinitionIndex = 58012;

	class LevelLoseHPByRatio : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Attacker; // 0x20
		::RPG::GameCore::FixPoint Damage; // 0x28
		::System::Single DitherRangeB; // 0x30
		::System::Single DitherRangeA; // 0x34
		::RPG::MVector3 HitPos; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelLoseHPByRatio* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelLoseHPByRatio*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
