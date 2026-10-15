#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeSlotConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class MapRotationVolumeSlotConfigAnchor; }

#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D803020)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D803030)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D802FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeSlotConfigAnchor_TypeDefinitionIndex = 17045;

	class MapRotationVolumeSlotConfigAnchor : public ::RPG::GameCore::MapRotationVolumeSlotConfigBase
	{
	public:
		::RPG::GameCore::DynamicString* LevelAnchorKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
