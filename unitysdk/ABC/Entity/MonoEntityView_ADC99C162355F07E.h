#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/MonoEntityView_ADC99C162355F07E_A18380DC712A3419.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ABC_ENTITY_MONOENTITYVIEW_ADC99C162355F07E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityView_ADC99C162355F07E_TypeDefinitionIndex = 2808;

	class MonoEntityView_ADC99C162355F07E : public ::System::Object
	{
	public:
		::ABC::Entity::MonoEntityView_ADC99C162355F07E_A18380DC712A3419 F115FA1EDA6D1617; // 0x10
		::UnityEngine::Vector3 FFF299FAC6915F64; // 0x14
		::UnityEngine::Quaternion A11869566437F4B0; // 0x20
		::System::Int32 EF2D16E2A7EDE20C; // 0x30
		::System::Int32 F18B5E144EBE7296; // 0x34
		::System::Single E6F1FCA2E9E32EC5; // 0x38
		::System::Single B00D5CA152954481; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_ADC99C162355F07E__CTOR_OFFSET))(this);
		}
	};
}
