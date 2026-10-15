#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfigContainer; }

#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D571370)
#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEffectConfigContainer_TypeDefinitionIndex = 16009;

	class ChimeraDuelEffectConfigContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEffectConfig*>* EffectConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEffectConfigContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEffectConfigContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
