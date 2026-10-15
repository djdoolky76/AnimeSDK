#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePerformActorFindType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D464860)
#define RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4646D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformCaptureActor_TypeDefinitionIndex = 23385;

	class BattlePerformCaptureActor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* StageInitKey; // 0x18
		::RPG::GameCore::BattlePerformActorFindType FindType; // 0x20
		::System::UInt32 CharacterID; // 0x24
		::RPG::GameCore::EntityType EntityType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformCaptureActor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
