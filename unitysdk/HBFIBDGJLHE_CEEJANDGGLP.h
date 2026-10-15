#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBFIBDGJLHE_EIntersectionConnectState.h"
#include "unitysdk/HBFIBDGJLHE_EIntersectionSignRuleExecuteType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/CityCarFlow/MonoCityCarFlowIntersection_SignRuleData.h"
class HBFIBDGJLHE_HCEFHEEHPAN;
class NNJOIHFDHML;

#define HBFIBDGJLHE_CEEJANDGGLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15BED420)
#define HBFIBDGJLHE_CEEJANDGGLP_DBGGBDAGEDM_OFFSET UNITYSDK_OFFSET(0x15BED670)
#define HBFIBDGJLHE_CEEJANDGGLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BED440)
#define HBFIBDGJLHE_CEEJANDGGLP_DOMAPEAJHDP_OFFSET UNITYSDK_OFFSET(0x15BED720)
#define HBFIBDGJLHE_CEEJANDGGLP_GEEFHNPCPEL_OFFSET UNITYSDK_OFFSET(0x15BED580)
#define HBFIBDGJLHE_CEEJANDGGLP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x15BED3E0)
#define HBFIBDGJLHE_CEEJANDGGLP_GET_RULE_OFFSET UNITYSDK_OFFSET(0x15BED400)
#define HBFIBDGJLHE_CEEJANDGGLP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15BED3F0)
#define HBFIBDGJLHE_CEEJANDGGLP_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15BED3D0)
#define HBFIBDGJLHE_CEEJANDGGLP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15BED490)
#define HBFIBDGJLHE_CEEJANDGGLP_SET_RULE_OFFSET UNITYSDK_OFFSET(0x15BED410)

inline static constexpr unsigned int HBFIBDGJLHE_CEEJANDGGLP_TypeDefinitionIndex = 82189;

	class HBFIBDGJLHE_CEEJANDGGLP : public ::System::Object
	{
	public:
		::HBFIBDGJLHE_HCEFHEEHPAN* _Rule_k__BackingField; // 0x10
		::System::Single _Duration_k__BackingField; // 0x18
		::HBFIBDGJLHE_EIntersectionSignRuleExecuteType _Type_k__BackingField; // 0x1C
		::System::Int32 _Value_k__BackingField; // 0x20
		::System::Void _ctor(::HBFIBDGJLHE_HCEFHEEHPAN* a1, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_SignRuleData a2, ::HBFIBDGJLHE_EIntersectionSignRuleExecuteType a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_HCEFHEEHPAN*, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_SignRuleData, ::HBFIBDGJLHE_EIntersectionSignRuleExecuteType))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_GET_VALUE_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_GET_DURATION_OFFSET))(this);
		}

		::HBFIBDGJLHE_EIntersectionSignRuleExecuteType get_Type()
		{
			return ((::HBFIBDGJLHE_EIntersectionSignRuleExecuteType(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_GET_TYPE_OFFSET))(this);
		}

		::HBFIBDGJLHE_HCEFHEEHPAN* get_Rule()
		{
			return ((::HBFIBDGJLHE_HCEFHEEHPAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_GET_RULE_OFFSET))(this);
		}

		::System::Void set_Rule(::HBFIBDGJLHE_HCEFHEEHPAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_HCEFHEEHPAN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_SET_RULE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::NNJOIHFDHML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNJOIHFDHML*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Boolean GEEFHNPCPEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_GEEFHNPCPEL_OFFSET))(this);
		}

		::System::Void DBGGBDAGEDM(::HBFIBDGJLHE_EIntersectionConnectState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_EIntersectionConnectState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_DBGGBDAGEDM_OFFSET))(this, a1);
		}

		::System::Void DOMAPEAJHDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CEEJANDGGLP_DOMAPEAJHDP_OFFSET))(this, a1);
		}

	};
