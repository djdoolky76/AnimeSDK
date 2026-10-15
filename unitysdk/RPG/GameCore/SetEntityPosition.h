#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class SetEntityPosition; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB1040)
#define RPG_GAMECORE_SETENTITYPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB1080)
#define RPG_GAMECORE_SETENTITYPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB0FE0)

namespace RPG::GameCore
{
	class SetEntityPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x38
		::RPG::GameCore::DynamicFloat* OffsetZ; // 0x40
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x48
		::System::Boolean UpdateRootOffset; // 0x50
		::System::Boolean SetRotation; // 0x51
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* YawAngle; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
