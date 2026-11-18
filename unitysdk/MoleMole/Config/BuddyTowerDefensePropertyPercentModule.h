#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/TargetValueModuleBase.h"

class DIAEPBNFKBO;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYPERCENTMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x131D8F00)
#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYPERCENTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x131D9080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTowerDefensePropertyPercentModule_TypeDefinitionIndex = 82421;

	class BuddyTowerDefensePropertyPercentModule : public ::MoleMole::Config::TargetValueModuleBase
	{
	public:
		::UnityEngine::AnimationCurve* PropertyValueCurve; // 0x10
		::MoleMole::Config::BaseProperty MaxPropertyKey; // 0x18
		::MoleMole::Config::BaseProperty PropertyKey; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYPERCENTMODULE__CTOR_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single selfToTargetDistance, ::DIAEPBNFKBO* targetDataComponent, ::MoleMole::Battle::Entity* selfEntity)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::DIAEPBNFKBO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYPERCENTMODULE_EVALUATE_OFFSET))(this, selfToTargetDistance, targetDataComponent, selfEntity);
		}
	};
}
