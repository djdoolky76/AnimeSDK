#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceSettingInfo; }
namespace RPG::GameCore { class FrameTimeBudgetInfo; }
namespace RPG::GameCore { class GameObjectPoolSetting; }

#define RPG_GAMECORE_DEVICESETTINGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2F30)
#define RPG_GAMECORE_DEVICESETTINGINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingInfo_TypeDefinitionIndex = 16465;

	class DeviceSettingInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GameObjectPoolSetting* GoPoolSetting; // 0x10
		::RPG::GameCore::FrameTimeBudgetInfo* FrameTimeBudget; // 0x18
		::System::Boolean StreamingEnable; // 0x20
		::System::Boolean ChessRogueEnterBattleUnloadMap; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceSettingInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceSettingInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
