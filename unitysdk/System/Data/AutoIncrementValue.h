#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DATA_AUTOINCREMENTVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F988D00)
#define SYSTEM_DATA_AUTOINCREMENTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F988EE0)

namespace System::Data
{
	inline static constexpr unsigned int AutoIncrementValue_TypeDefinitionIndex = 37226;

	class AutoIncrementValue : public ::System::Object
	{
	public:
		::System::Boolean _Auto_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE__CTOR_OFFSET))(this);
		}

		::System::Data::AutoIncrementValue* Clone()
		{
			return ((::System::Data::AutoIncrementValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_CLONE_OFFSET))(this);
		}
	};
}
