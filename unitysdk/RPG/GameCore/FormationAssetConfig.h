#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationAssetConfig; }
namespace RPG::GameCore { class FormationData; }

#define RPG_GAMECORE_FORMATIONASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BCB80)
#define RPG_GAMECORE_FORMATIONASSETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BCAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationAssetConfig_TypeDefinitionIndex = 17134;

	class FormationAssetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationData*>* FormationDataList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONASSETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationAssetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationAssetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONASSETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
