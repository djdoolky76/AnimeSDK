#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class SpreadStepConfig; }
namespace RPG::GameCore::Booklet { class StepConfig; }

#define RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D448030)
#define RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D446F70)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SpreadStepConfig_TypeDefinitionIndex = 24974;

	class SpreadStepConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* StepList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SpreadStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SpreadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
