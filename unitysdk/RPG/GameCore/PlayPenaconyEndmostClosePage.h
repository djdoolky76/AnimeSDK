#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayPenaconyEndmostClosePage; }

#define RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92FEA0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92FEB0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92FDE0)

namespace RPG::GameCore
{
	class PlayPenaconyEndmostClosePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostClosePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostClosePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
