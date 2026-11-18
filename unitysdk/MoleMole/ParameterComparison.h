#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIAnimatorParamType.h"
#include "unitysdk/MoleMole/AICompareType.h"

class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_PARAMETERCOMPARISON_COMPAREBOOL_OFFSET UNITYSDK_OFFSET(0x12B84E00)
#define MOLEMOLE_PARAMETERCOMPARISON_COMPAREFLOAT_OFFSET UNITYSDK_OFFSET(0x12B84890)
#define MOLEMOLE_PARAMETERCOMPARISON_COMPAREINT_OFFSET UNITYSDK_OFFSET(0x12B84BA0)
#define MOLEMOLE_PARAMETERCOMPARISON_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B84320)
#define MOLEMOLE_PARAMETERCOMPARISON_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B846C0)
#define MOLEMOLE_PARAMETERCOMPARISON_PARAMCHECK_OFFSET UNITYSDK_OFFSET(0x12B84760)
#define MOLEMOLE_PARAMETERCOMPARISON__CTOR_OFFSET UNITYSDK_OFFSET(0x12B85060)
#define MOLEMOLE_PARAMETERCOMPARISON___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B85100)
#define MOLEMOLE_PARAMETERCOMPARISON___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B85190)

namespace MoleMole
{
	inline static constexpr unsigned int ParameterComparison_TypeDefinitionIndex = 63471;

	class ParameterComparison : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* BoolValue; // 0x50
		::BehaviorDesigner::Runtime::SharedFloat* FloatValue; // 0x58
		::BehaviorDesigner::Runtime::SharedString* ParameterName; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedInt* IntValue; // 0x70
		::NLNIIPDCABP* characterAnimatorComponent; // 0x78
		::MoleMole::AIAnimatorParamType ParameterType; // 0x80
		::System::Int32 _animatorInstanceId; // 0x84
		::MoleMole::AICompareType CompareType; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean CompareBool(::System::Boolean isTrigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON_COMPAREBOOL_OFFSET))(this, isTrigger);
		}

		::System::Boolean CompareInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON_COMPAREINT_OFFSET))(this);
		}

		::System::Boolean CompareFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON_COMPAREFLOAT_OFFSET))(this);
		}

		::System::Boolean ParamCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON_PARAMCHECK_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARAMETERCOMPARISON___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
