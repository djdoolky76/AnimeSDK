#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_LICENSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FF9D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int License_TypeDefinitionIndex = 2924;

	class License : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSE__CTOR_OFFSET))(this);
		}
	};
}
