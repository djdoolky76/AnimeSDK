#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcHeadLookAtPlayer; }

#define RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A7A10)
#define RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A7A20)
#define RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A79E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcHeadLookAtPlayer_TypeDefinitionIndex = 21748;

	class AdvNpcHeadLookAtPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcHeadLookAtPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcHeadLookAtPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
