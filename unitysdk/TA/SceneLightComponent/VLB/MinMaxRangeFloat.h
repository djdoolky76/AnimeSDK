#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x28B8020)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x28B7F80)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x28B8100)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GETLERPEDVALUE_OFFSET UNITYSDK_OFFSET(0x28B81B0)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x28B8240)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x28992C0)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GET_RANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x28B8250)
#define TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x2748A90)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int MinMaxRangeFloat_TypeDefinitionIndex = 16279;

	struct alignas(4) MinMaxRangeFloat
	{
		::System::Single m_MinValue; // 0x10
		::System::Single m_MaxValue; // 0x14

		::System::Void _ctor(::System::Single BDD0BFB63061789A, ::System::Single BD80BAA77F7F7D95)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT__CTOR_OFFSET))(this, BDD0BFB63061789A, BD80BAA77F7F7D95);
		}

		::System::Single get_randomValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GET_RANDOMVALUE_OFFSET))(this);
		}

		::System::Single GetLerpedValue(::System::Single E330F11BC2451186)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GETLERPEDVALUE_OFFSET))(this, E330F11BC2451186);
		}

		::System::Single get_maxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Single get_minValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GET_MINVALUE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::TA::SceneLightComponent::VLB::MinMaxRangeFloat BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::TA::SceneLightComponent::VLB::MinMaxRangeFloat))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_MINMAXRANGEFLOAT_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}
	};
}
