#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class StepConfig; }

#define RPG_GAMECORE_BOOKLET_STEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4745F0)
#define RPG_GAMECORE_BOOKLET_STEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D475BD0)
#define RPG_GAMECORE_BOOKLET_STEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D475340)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int StepConfig_TypeDefinitionIndex = 24975;

	class StepConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_STEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::StepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::StepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_STEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::StepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::StepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_STEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
