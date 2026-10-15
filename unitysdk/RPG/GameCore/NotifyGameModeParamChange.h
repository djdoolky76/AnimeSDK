#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeParamNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NotifyGameModeParamChange; }

#define RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DAF90)
#define RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DAFA0)
#define RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DAF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyGameModeParamChange_TypeDefinitionIndex = 23702;

	class NotifyGameModeParamChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameModeParamNotifyType ParamType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ParamValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyGameModeParamChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyGameModeParamChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyGameModeParamChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyGameModeParamChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYGAMEMODEPARAMCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
