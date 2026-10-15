#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveFMChannelReceiver; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D349A20)
#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D349A30)
#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3499F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFMChannelReceiver_TypeDefinitionIndex = 20579;

	class ActiveFMChannelReceiver : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::System::Boolean Active; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
