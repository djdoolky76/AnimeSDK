#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class F60CD5AA5C2080DF; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_B94EF4179FF15E34__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeData_B94EF4179FF15E34_TypeDefinitionIndex = 10631;

	class CustomAttributeData_B94EF4179FF15E34 : public ::System::Object
	{
	public:
		::System::Reflection::F60CD5AA5C2080DF* B476B7AD17F6C7E5; // 0x10
		::System::IntPtr F220A2D27F7C6B6C; // 0x18
		::System::UInt32 AA254E7FD5EA1788; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_B94EF4179FF15E34__CTOR_OFFSET))(this);
		}
	};
}
