#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndPerformance; }

#define RPG_GAMECORE_ENDPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6415D0)
#define RPG_GAMECORE_ENDPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6415E0)
#define RPG_GAMECORE_ENDPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D641510)

namespace RPG::GameCore
{
	class EndPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
