#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateFMChannelSource; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CREATEFMCHANNELSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3A70)
#define RPG_GAMECORE_CREATEFMCHANNELSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E3A80)
#define RPG_GAMECORE_CREATEFMCHANNELSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E3A40)

namespace RPG::GameCore
{
	class CreateFMChannelSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicString* ChannelName; // 0x20
		::RPG::GameCore::DynamicFloat* DefaultValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateFMChannelSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateFMChannelSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateFMChannelSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateFMChannelSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
