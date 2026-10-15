#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearEntityFloatMessage; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6020)
#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B6030)
#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5FE0)

namespace RPG::GameCore
{
	class ClearEntityFloatMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FloatMessageType MessageType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
