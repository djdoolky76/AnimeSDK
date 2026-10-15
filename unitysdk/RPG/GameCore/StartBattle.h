#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartBattle; }

#define RPG_GAMECORE_STARTBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1BE90)
#define RPG_GAMECORE_STARTBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1BEA0)
#define RPG_GAMECORE_STARTBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1BDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartBattle_TypeDefinitionIndex = 23405;

	class StartBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
