#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyVirtualTeam; }

#define RPG_GAMECORE_DESTROYVIRTUALTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0010)
#define RPG_GAMECORE_DESTROYVIRTUALTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0020)
#define RPG_GAMECORE_DESTROYVIRTUALTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CFFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyVirtualTeam_TypeDefinitionIndex = 21610;

	class DestroyVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYVIRTUALTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyVirtualTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYVIRTUALTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyVirtualTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYVIRTUALTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
