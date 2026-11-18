#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GROUPPREDICATE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x783E70)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GroupPredicate_TypeDefinitionIndex = 80631;

	struct alignas(4) GroupPredicate
	{
		::System::Boolean EnableAngleConstraint; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 AngleConstraint; // 0x14
		::System::Boolean EnableDistanceConstraint; // 0x1C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 DistanceConstraint; // 0x20

		::System::Boolean IsMatch(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GROUPPREDICATE_ISMATCH_OFFSET))(this, controller);
		}
	};
}
