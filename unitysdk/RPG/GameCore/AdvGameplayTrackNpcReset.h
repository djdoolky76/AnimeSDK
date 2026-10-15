#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGameplayTrackNpcReset; }

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3734D0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3734E0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D373410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcReset_TypeDefinitionIndex = 22185;

	class AdvGameplayTrackNpcReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
