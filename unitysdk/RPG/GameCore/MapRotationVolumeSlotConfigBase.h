#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }

#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F08D1B0)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F08D4D0)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F08D340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeSlotConfigBase_TypeDefinitionIndex = 22710;

	class MapRotationVolumeSlotConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SlotID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
