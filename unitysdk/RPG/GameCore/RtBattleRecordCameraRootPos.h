#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleRecordCameraRootPos; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA20810)
#define RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA20850)
#define RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA207B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleRecordCameraRootPos_TypeDefinitionIndex = 24097;

	class RtBattleRecordCameraRootPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean UseGridPos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleRecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleRecordCameraRootPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleRecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleRecordCameraRootPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLERECORDCAMERAROOTPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
