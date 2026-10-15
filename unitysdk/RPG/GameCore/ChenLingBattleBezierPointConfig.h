#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleBezierPointConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D554DC0)
#define RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D554A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBezierPointConfig_TypeDefinitionIndex = 15717;

	class ChenLingBattleBezierPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint RangeBegin; // 0x10
		::RPG::GameCore::FixPoint RangeEnd; // 0x18
		::RPG::GameCore::FixPoint RangeDampXZMin; // 0x20
		::RPG::GameCore::FixPoint RangeDampXZMax; // 0x28
		::RPG::GameCore::FixPoint RangeDampYMin; // 0x30
		::RPG::GameCore::FixPoint RangeDampYMax; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBezierPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBezierPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
