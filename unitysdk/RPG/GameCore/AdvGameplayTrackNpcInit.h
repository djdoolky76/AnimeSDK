#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGameplayTrackNpcInit; }

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0E10)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0E20)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0D50)

namespace RPG::GameCore
{
	class AdvGameplayTrackNpcInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
