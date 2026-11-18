#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld_EntityComponentMaskMap; }

#define NAP_NAPECS_ECSWORLD_ENTITYREMOVEMONITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8600E0)
#define NAP_NAPECS_ECSWORLD_ENTITYREMOVEMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x860090)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld_EntityRemoveMonitor_TypeDefinitionIndex = 36018;

	struct alignas(4) EcsWorld_EntityRemoveMonitor
	{
		::System::Void _ctor(::Nap::NapECS::EcsWorld_EntityComponentMaskMap* map, ::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityComponentMaskMap*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYREMOVEMONITOR__CTOR_OFFSET))(this, map, entity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYREMOVEMONITOR_DISPOSE_OFFSET))(this);
		}
	};
}
