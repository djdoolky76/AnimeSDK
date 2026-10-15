#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcTrackConfig; }

#define RPG_GAMECORE_TRACKNPCTRACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFCAD0)
#define RPG_GAMECORE_TRACKNPCTRACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFC9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcTrackConfig_TypeDefinitionIndex = 22181;

	class TrackNpcTrackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single VisibleDelta; // 0x10
		::System::Single InvisibleDelta; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCTRACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcTrackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcTrackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCTRACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
