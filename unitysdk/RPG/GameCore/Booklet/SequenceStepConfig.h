#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class SequenceStepConfig; }
namespace RPG::GameCore::Booklet { class StepConfig; }

#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4476B0)
#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4476C0)
#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D447660)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SequenceStepConfig_TypeDefinitionIndex = 24976;

	class SequenceStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* Children; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SequenceStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SequenceStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
