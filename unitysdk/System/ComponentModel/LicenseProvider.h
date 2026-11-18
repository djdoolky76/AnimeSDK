#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9D260)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseProvider_TypeDefinitionIndex = 2930;

	class LicenseProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
