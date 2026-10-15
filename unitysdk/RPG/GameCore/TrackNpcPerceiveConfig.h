#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcPerceiveConfig; }
namespace RPG::GameCore { class TrackNpcPerceiveValueConfig; }

#define RPG_GAMECORE_TRACKNPCPERCEIVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2A030)
#define RPG_GAMECORE_TRACKNPCPERCEIVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC29F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcPerceiveConfig_TypeDefinitionIndex = 22178;

	class TrackNpcPerceiveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TrackNpcPerceiveValueConfig* Visible; // 0x10
		::RPG::GameCore::TrackNpcPerceiveValueConfig* Invisible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcPerceiveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcPerceiveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
