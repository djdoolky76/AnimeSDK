#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateFMChannelReceiver; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CREATEFMCHANNELRECEIVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5E60)
#define RPG_GAMECORE_CREATEFMCHANNELRECEIVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B5E70)
#define RPG_GAMECORE_CREATEFMCHANNELRECEIVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateFMChannelReceiver_TypeDefinitionIndex = 20578;

	class CreateFMChannelReceiver : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::RPG::GameCore::DynamicString* ChannelName; // 0x20
		::RPG::GameCore::DynamicString* SaveDynamicValueName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELRECEIVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELRECEIVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELRECEIVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
