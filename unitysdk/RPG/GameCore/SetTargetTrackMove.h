#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class SetTargetTrackMove; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETTRACKMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC6340)
#define RPG_GAMECORE_SETTARGETTRACKMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC63A0)
#define RPG_GAMECORE_SETTARGETTRACKMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC62C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetTrackMove_TypeDefinitionIndex = 20171;

	class SetTargetTrackMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* StartPosTarget; // 0x20
		::RPG::MVector3 StartOffset; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* Tracks; // 0x38
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTRACKMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetTrackMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetTrackMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTRACKMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetTrackMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetTrackMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTRACKMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
