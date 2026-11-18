#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/IFNOIBOIGFM.h"

namespace MoleMole::Config { class IHollowCameraPredicate; }

#define MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND_EVALUATE_OFFSET UNITYSDK_OFFSET(0x190B4E80)
#define MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND__CTOR_OFFSET UNITYSDK_OFFSET(0x190B5010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateAnd_TypeDefinitionIndex = 92746;

	class HollowCameraPredicateAnd : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::Il2CppArray<::MoleMole::Config::IHollowCameraPredicate*>* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::IFNOIBOIGFM& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFNOIBOIGFM&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND_EVALUATE_OFFSET))(this, info);
		}
	};
}
