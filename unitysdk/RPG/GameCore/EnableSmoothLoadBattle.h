#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableSmoothLoadBattle; }

#define RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613300)
#define RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613310)
#define RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6132C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSmoothLoadBattle_TypeDefinitionIndex = 23324;

	class EnableSmoothLoadBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single FrameBudgetScale; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableSmoothLoadBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableSmoothLoadBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableSmoothLoadBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableSmoothLoadBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
