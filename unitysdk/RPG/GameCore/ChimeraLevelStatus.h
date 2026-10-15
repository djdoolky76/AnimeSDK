#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraLevelStatus; }

#define RPG_GAMECORE_CHIMERALEVELSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ADA70)
#define RPG_GAMECORE_CHIMERALEVELSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AD8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraLevelStatus_TypeDefinitionIndex = 15848;

	class ChimeraLevelStatus : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Attack; // 0x10
		::RPG::GameCore::FixPoint HP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERALEVELSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraLevelStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraLevelStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERALEVELSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
