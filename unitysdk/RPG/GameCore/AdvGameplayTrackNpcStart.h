#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGameplayTrackNpcStart; }

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D373660)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D373670)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3735A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcStart_TypeDefinitionIndex = 22187;

	class AdvGameplayTrackNpcStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
