#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayPenaconyEndmostMove; }

#define RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D902630)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D902640)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D902600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostMove_TypeDefinitionIndex = 21828;

	class PlayPenaconyEndmostMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Int32 OffsetX; // 0x1C
		::System::Int32 OffsetY; // 0x20
		::System::Single Time; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
