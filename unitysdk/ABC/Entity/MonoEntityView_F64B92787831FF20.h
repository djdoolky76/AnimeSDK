#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/MonoEntityView_F64B92787831FF20_A18380DC712A3419.h"
#include "unitysdk/F52D7D0423C392F6/FC03173D7A729EF9.h"
#include "unitysdk/System/Object.h"

#define ABC_ENTITY_MONOENTITYVIEW_F64B92787831FF20__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityView_F64B92787831FF20_TypeDefinitionIndex = 2803;

	class MonoEntityView_F64B92787831FF20 : public ::System::Object
	{
	public:
		::ABC::Entity::MonoEntityView_F64B92787831FF20_A18380DC712A3419 F115FA1EDA6D1617; // 0x10
		::F52D7D0423C392F6::FC03173D7A729EF9 E9161AE6B7C1B8D7; // 0x14
		::System::Single A66473435655ABC6; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_F64B92787831FF20__CTOR_OFFSET))(this);
		}
	};
}
