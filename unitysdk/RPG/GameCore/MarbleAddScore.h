#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAddScore; }

#define RPG_GAMECORE_MARBLEADDSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D836CC0)
#define RPG_GAMECORE_MARBLEADDSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D836CD0)
#define RPG_GAMECORE_MARBLEADDSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D836C70)

namespace RPG::GameCore
{
	class MarbleAddScore : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Boolean EnemyTeam; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 Score; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
