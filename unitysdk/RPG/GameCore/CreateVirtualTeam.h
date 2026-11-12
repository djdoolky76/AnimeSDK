#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateVirtualTeam; }

#define RPG_GAMECORE_CREATEVIRTUALTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F9010)
#define RPG_GAMECORE_CREATEVIRTUALTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7F9020)
#define RPG_GAMECORE_CREATEVIRTUALTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7F8FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateVirtualTeam_TypeDefinitionIndex = 21997;

	class CreateVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateVirtualTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateVirtualTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
