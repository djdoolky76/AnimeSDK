#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class KillNPCMonsterInServer; }

#define RPG_GAMECORE_KILLNPCMONSTERINSERVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E65C0)
#define RPG_GAMECORE_KILLNPCMONSTERINSERVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9E65D0)
#define RPG_GAMECORE_KILLNPCMONSTERINSERVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9E6580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int KillNPCMonsterInServer_TypeDefinitionIndex = 20655;

	class KillNPCMonsterInServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KILLNPCMONSTERINSERVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::KillNPCMonsterInServer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::KillNPCMonsterInServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KILLNPCMONSTERINSERVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::KillNPCMonsterInServer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::KillNPCMonsterInServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KILLNPCMONSTERINSERVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
