#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MoveToTargetPosition; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MOVETOTARGETPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890480)
#define RPG_GAMECORE_MOVETOTARGETPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D890510)
#define RPG_GAMECORE_MOVETOTARGETPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8903D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveToTargetPosition_TypeDefinitionIndex = 22461;

	class MoveToTargetPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TargetAttachPointName; // 0x28
		::System::Boolean IgnoreRadius; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* OffsetTargetDistance; // 0x38
		::RPG::GameCore::DynamicFloat* MovePercentage; // 0x40
		::RPG::GameCore::MoveOffsetCoordType OffsetCoord; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* OffsetForward; // 0x50
		::RPG::GameCore::DynamicFloat* OffsetHorizontal; // 0x58
		::RPG::GameCore::DynamicFloat* OffsetVertical; // 0x60
		::System::Boolean ApplyTargetPosY; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveToTargetPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveToTargetPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveToTargetPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveToTargetPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
