#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightWaitOpenOrb; }

#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D749D20)
#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D749D30)
#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D749CF0)

namespace RPG::GameCore
{
	class GridFightWaitOpenOrb : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitOpenAll; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 OrbID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
