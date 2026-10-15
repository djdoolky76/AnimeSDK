#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PedestrianConfig; }

#define RPG_GAMECORE_PEDESTRIANCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C7130)
#define RPG_GAMECORE_PEDESTRIANCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C7080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PedestrianConfig_TypeDefinitionIndex = 17622;

	class PedestrianConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SideBySideWidth; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEDESTRIANCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PedestrianConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PedestrianConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEDESTRIANCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
