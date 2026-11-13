#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicOptionalLayerGate; }

#define RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x207751D0)
#define RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207751E0)
#define RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20775110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicOptionalLayerGate_TypeDefinitionIndex = 22530;

	class RogueMagicOptionalLayerGate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicOptionalLayerGate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicOptionalLayerGate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicOptionalLayerGate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicOptionalLayerGate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
