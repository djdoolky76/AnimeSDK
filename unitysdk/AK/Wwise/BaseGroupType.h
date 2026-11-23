#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"

class WwiseObjectReference;

#define AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x2912AF0)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPWWISEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x2912B80)
#define AK_WWISE_BASEGROUPTYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x2912A20)
#define AK_WWISE_BASEGROUPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int BaseGroupType_TypeDefinitionIndex = 21578;

	class BaseGroupType : public ::AK::Wwise::BaseType
	{
	public:
		::System::Int32 groupIdInternal; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* groupGuidInternal; // 0x28

		::WwiseObjectReference* get_GroupWwiseObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPWWISEOBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET))(this);
		}
	};
}
