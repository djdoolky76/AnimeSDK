#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_Enable_Interact; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA83F00)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA83F10)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA83E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Enable_Interact_TypeDefinitionIndex = 21310;

	class ST_Side_Hipplen_Enable_Interact : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_ENABLE_INTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
