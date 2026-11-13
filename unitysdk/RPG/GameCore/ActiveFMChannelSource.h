#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveFMChannelSource; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F93D0)
#define RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4F93E0)
#define RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4F93A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFMChannelSource_TypeDefinitionIndex = 20913;

	class ActiveFMChannelSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::System::Boolean Active; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveFMChannelSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveFMChannelSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveFMChannelSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveFMChannelSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
