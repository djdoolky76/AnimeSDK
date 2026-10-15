#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_EnableDialogue; }

#define RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA559E0)
#define RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA559F0)
#define RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA559B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_EnableDialogue_TypeDefinitionIndex = 20145;

	class ST_Side_EnableDialogue : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean Inverse; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_EnableDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_EnableDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_EnableDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_EnableDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
