#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateVirtualTeam; }

#define RPG_GAMECORE_CREATEVIRTUALTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B94B0)
#define RPG_GAMECORE_CREATEVIRTUALTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B94C0)
#define RPG_GAMECORE_CREATEVIRTUALTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B9470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateVirtualTeam_TypeDefinitionIndex = 21609;

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
