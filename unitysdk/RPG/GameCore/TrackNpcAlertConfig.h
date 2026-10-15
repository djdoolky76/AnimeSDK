#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcAlertConfig; }
namespace RPG::GameCore { class TrackNpcAlertValueConfig; }

#define RPG_GAMECORE_TRACKNPCALERTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFC340)
#define RPG_GAMECORE_TRACKNPCALERTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFC260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcAlertConfig_TypeDefinitionIndex = 22180;

	class TrackNpcAlertConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TrackNpcAlertValueConfig* Visible; // 0x10
		::RPG::GameCore::TrackNpcAlertValueConfig* Invisible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcAlertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcAlertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
