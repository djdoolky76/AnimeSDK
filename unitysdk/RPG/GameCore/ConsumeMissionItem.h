#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConsumeMissionItem; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_CONSUMEMISSIONITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DAFF0)
#define RPG_GAMECORE_CONSUMEMISSIONITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DB000)
#define RPG_GAMECORE_CONSUMEMISSIONITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DAFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeMissionItem_TypeDefinitionIndex = 21599;

	class ConsumeMissionItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Boolean IsAutoConsume; // 0x1C
		::System::Boolean IsShowConsumeFinishTips; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID Desc; // 0x20
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeMissionItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeMissionItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeMissionItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeMissionItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
