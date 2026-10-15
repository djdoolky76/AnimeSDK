#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
class WwiseObjectReference;

#define AK_WWISE_BASEGROUPTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F56DCA0)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPGUID_OFFSET UNITYSDK_OFFSET(0x1F56DB20)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1F56D9F0)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1F56DAE0)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPWWISEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F56D880)
#define AK_WWISE_BASEGROUPTYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F56DA30)

namespace AK::Wwise
{
	class BaseGroupType : public ::AK::Wwise::BaseType
	{
	public:
		::System::Int32 groupIdInternal; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* groupGuidInternal; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_GroupWwiseObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPWWISEOBJECTREFERENCE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_groupID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_groupGuid()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPGUID_OFFSET))(this);
		}

	};
}
