#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameEntryMenu; }
namespace RPG::GameCore { class GameEntryStage; }
namespace RPG::GameCore { class GameEntryUIConfig; }

#define RPG_GAMECORE_GAMEENTRYUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E920DB0)
#define RPG_GAMECORE_GAMEENTRYUICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E90C560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntryUIConfig_TypeDefinitionIndex = 16624;

	class GameEntryUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameEntryMenu*>* GameEntryMenuList; // 0x10
		::Il2CppArray<::RPG::GameCore::GameEntryStage*>* GameEntryStageList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameEntryUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameEntryUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYUICONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
