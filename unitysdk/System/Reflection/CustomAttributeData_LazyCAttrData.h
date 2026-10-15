#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class Assembly; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_LAZYCATTRDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C298D80)

namespace System::Reflection
{
	class CustomAttributeData_LazyCAttrData : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* assembly; // 0x10
		::System::UInt32 data_length; // 0x18
		::System::Byte _padding0[0x4];
		::System::IntPtr data; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_LAZYCATTRDATA_CTOR_OFFSET))(this);
		}

	};
}
