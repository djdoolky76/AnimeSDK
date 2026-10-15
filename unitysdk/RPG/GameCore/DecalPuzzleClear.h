#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecalPuzzleClear; }

#define RPG_GAMECORE_DECALPUZZLECLEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F8F80)
#define RPG_GAMECORE_DECALPUZZLECLEAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F8F90)
#define RPG_GAMECORE_DECALPUZZLECLEAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F8F50)

namespace RPG::GameCore
{
	class DecalPuzzleClear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsClearOutOfRegionOnly; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLECLEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalPuzzleClear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalPuzzleClear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLECLEAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalPuzzleClear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalPuzzleClear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLECLEAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
