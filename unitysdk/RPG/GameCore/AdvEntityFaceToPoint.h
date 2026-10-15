#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FaceToPointType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityFaceToPoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYFACETOPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36FFB0)
#define RPG_GAMECORE_ADVENTITYFACETOPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36FFC0)
#define RPG_GAMECORE_ADVENTITYFACETOPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36FF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityFaceToPoint_TypeDefinitionIndex = 20546;

	class AdvEntityFaceToPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::FaceToPointType PointType; // 0x20
		::System::UInt32 GroupId; // 0x24
		::System::UInt32 PointID; // 0x28
		::RPG::GameCore::WaypathUsageType UsageType; // 0x2C
		::System::Boolean FinishImmediately; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETOPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityFaceToPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityFaceToPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETOPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityFaceToPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityFaceToPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETOPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
