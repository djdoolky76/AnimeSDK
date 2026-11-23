#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABC/Entity/MonoEntityEffectRecevier_BD6F036E45900C33.h"

class E8D1F8121DE4E246;

#define ABC_ENTITY_MONOENTITYEFFECTRECEVIER_B3B55B0BAA95B229_BACE266DE22D5167_OFFSET UNITYSDK_OFFSET(0x1F26C40)
#define ABC_ENTITY_MONOENTITYEFFECTRECEVIER_B3B55B0BAA95B229__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityEffectRecevier_B3B55B0BAA95B229_TypeDefinitionIndex = 7551;

	class MonoEntityEffectRecevier_B3B55B0BAA95B229 : public ::System::Object
	{
	public:
		::E8D1F8121DE4E246* AB9FE7513D7A44A3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYEFFECTRECEVIER_B3B55B0BAA95B229__CTOR_OFFSET))(this);
		}

		::System::Boolean BACE266DE22D5167(::ABC::Entity::MonoEntityEffectRecevier_BD6F036E45900C33 BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Entity::MonoEntityEffectRecevier_BD6F036E45900C33))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYEFFECTRECEVIER_B3B55B0BAA95B229_BACE266DE22D5167_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
