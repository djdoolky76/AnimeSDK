#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/IFNOIBOIGFM.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFACFF10)
#define MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD02C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraSafeZonePredicate_TypeDefinitionIndex = 38607;

	class HollowCameraSafeZonePredicate : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::System::String* SafeZoneKey; // 0x10
		::System::Boolean OverrideSafeZone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::IFNOIBOIGFM& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFNOIBOIGFM&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE_EVALUATE_OFFSET))(this, info);
		}
	};
}
