#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigMunicipalPedestrianOverride; }

#define RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A8720)
#define RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A85F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigMunicipalPedestrianOverride_TypeDefinitionIndex = 16919;

	class ConfigMunicipalPedestrianOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single OverrideTestSpawnDistance; // 0x10
		::System::Boolean OverrideEnableAutoRespawn; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigMunicipalPedestrianOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigMunicipalPedestrianOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
