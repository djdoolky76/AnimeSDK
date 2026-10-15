#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTakeInitialScore; }

#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA01660)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA01670)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA015A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTakeInitialScore_TypeDefinitionIndex = 22288;

	class RogueTakeInitialScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
