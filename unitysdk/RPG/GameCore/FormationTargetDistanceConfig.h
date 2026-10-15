#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationTargetDistanceConfig; }

#define RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EBF20)
#define RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EBDA0)

namespace RPG::GameCore
{
	class FormationTargetDistanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DistanceRangeMin; // 0x10
		::System::Single DistanceRangeMax; // 0x14
		::System::Single TargetDistance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationTargetDistanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationTargetDistanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
