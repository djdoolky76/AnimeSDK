#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeSlotConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class MapRotationVolumeSlotConfigAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D803150)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D803160)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D803100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeSlotConfigAttachPoint_TypeDefinitionIndex = 17046;

	class MapRotationVolumeSlotConfigAttachPoint : public ::RPG::GameCore::MapRotationVolumeSlotConfigBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* AttachPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeSlotConfigAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeSlotConfigAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
