#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConsumeMissionItemPerformance; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AD830)
#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AD840)
#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AD800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeMissionItemPerformance_TypeDefinitionIndex = 20448;

	class ConsumeMissionItemPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x38
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
