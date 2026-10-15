#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace RPG::GameCore { class ChimeraDuelModifier; }

#define RPG_GAMECORE_CHIMERADUELMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A56C0)
#define RPG_GAMECORE_CHIMERADUELMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelModifier_TypeDefinitionIndex = 16017;

	class ChimeraDuelModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEffectConfig*>* Effects; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
