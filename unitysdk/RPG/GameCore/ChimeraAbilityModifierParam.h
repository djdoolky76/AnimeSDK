#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraModifierType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityModifierParam; }

#define RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597BB0)
#define RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D597A60)

namespace RPG::GameCore
{
	class ChimeraAbilityModifierParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraModifierType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityModifierParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityModifierParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
