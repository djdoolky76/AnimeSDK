#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPPARAMETERATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DE140)

namespace System::Runtime::Remoting::Metadata
{
	class SoapParameterAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPPARAMETERATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
