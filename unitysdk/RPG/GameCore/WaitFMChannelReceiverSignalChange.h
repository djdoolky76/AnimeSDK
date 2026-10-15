#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFMChannelReceiverSignalChange; }

#define RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC69C80)
#define RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC69C90)
#define RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC69C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFMChannelReceiverSignalChange_TypeDefinitionIndex = 20580;

	class WaitFMChannelReceiverSignalChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFMChannelReceiverSignalChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFMChannelReceiverSignalChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
