#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsIdGenerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAP_NAPECS_ECSENTITYGROUP_ADDENTITY_OFFSET UNITYSDK_OFFSET(0x1CE06120)
#define NAP_NAPECS_ECSENTITYGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CE080E0)
#define NAP_NAPECS_ECSENTITYGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE081C0)
#define NAP_NAPECS_ECSENTITYGROUP_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1CE02CE0)
#define NAP_NAPECS_ECSENTITYGROUP_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x1CE08270)
#define NAP_NAPECS_ECSENTITYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE08030)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGroup_TypeDefinitionIndex = 35955;

	class EcsEntityGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Nap::NapECS::EcsEntity*>* entityList; // 0x10
		::Nap::NapECS::EcsIdGenerator* entityIdGenerator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITYGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITYGROUP_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITYGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void AddEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITYGROUP_ADDENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITYGROUP_REMOVEENTITY_OFFSET))(this, entity);
		}

		::Nap::NapECS::EcsEntity* GetEntity(::System::UInt32 entityId)
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITYGROUP_GETENTITY_OFFSET))(this, entityId);
		}
	};
}
