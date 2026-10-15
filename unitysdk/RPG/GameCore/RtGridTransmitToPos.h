#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtGridTransmitToPos; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTGRIDTRANSMITTOPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5DBC0)
#define RPG_GAMECORE_RTGRIDTRANSMITTOPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5DC00)
#define RPG_GAMECORE_RTGRIDTRANSMITTOPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5DB60)

namespace RPG::GameCore
{
	class RtGridTransmitToPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDTRANSMITTOPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtGridTransmitToPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtGridTransmitToPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDTRANSMITTOPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtGridTransmitToPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtGridTransmitToPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDTRANSMITTOPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
