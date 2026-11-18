#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TargetValueModuleBase.h"

class DIAEPBNFKBO;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11A62AC0)
#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A62D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTowerDefenseDistance_TypeDefinitionIndex = 59821;

	class BuddyTowerDefenseDistance : public ::MoleMole::Config::TargetValueModuleBase
	{
	public:
		::UnityEngine::AnimationCurve* BuddyDistanceValueCurve; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE__CTOR_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single selfToTargetDistance, ::DIAEPBNFKBO* targetDataComponent, ::MoleMole::Battle::Entity* selfEntity)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::DIAEPBNFKBO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE_EVALUATE_OFFSET))(this, selfToTargetDistance, targetDataComponent, selfEntity);
		}
	};
}
