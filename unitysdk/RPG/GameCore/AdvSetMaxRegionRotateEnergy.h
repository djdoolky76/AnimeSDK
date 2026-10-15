#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetMaxRegionRotateEnergy; }

#define RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3828E0)
#define RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3828F0)
#define RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3828A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetMaxRegionRotateEnergy_TypeDefinitionIndex = 20921;

	class AdvSetMaxRegionRotateEnergy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetMaxRegionRotateEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMAXREGIONROTATEENERGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
