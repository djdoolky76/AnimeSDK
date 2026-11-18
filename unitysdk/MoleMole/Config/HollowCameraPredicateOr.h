#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/IFNOIBOIGFM.h"

namespace MoleMole::Config { class IHollowCameraPredicate; }

#define MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B9335A0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B933730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateOr_TypeDefinitionIndex = 48505;

	class HollowCameraPredicateOr : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::Il2CppArray<::MoleMole::Config::IHollowCameraPredicate*>* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::IFNOIBOIGFM& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFNOIBOIGFM&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEOR_EVALUATE_OFFSET))(this, info);
		}
	};
}
