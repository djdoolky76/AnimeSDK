#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayPenaconyEndmostScale; }

#define RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D902890)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9028A0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D902860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostScale_TypeDefinitionIndex = 21827;

	class PlayPenaconyEndmostScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Scale; // 0x18
		::System::Single Time; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
