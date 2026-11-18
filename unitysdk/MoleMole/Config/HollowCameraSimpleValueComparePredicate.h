#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/MoleMole/Config/HollowCameraPredicateSimpleValueType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/IFNOIBOIGFM.h"

#define MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BA476D0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1BA477D0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA478B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraSimpleValueComparePredicate_TypeDefinitionIndex = 56782;

	class HollowCameraSimpleValueComparePredicate : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::MoleMole::Config::HollowCameraPredicateSimpleValueType ValueType; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x14
		::System::Single ValueTarget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::IFNOIBOIGFM& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFNOIBOIGFM&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_EVALUATE_OFFSET))(this, info);
		}

		::System::Boolean TryGetValue(::IFNOIBOIGFM& info, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFNOIBOIGFM&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_TRYGETVALUE_OFFSET))(this, info, value);
		}
	};
}
