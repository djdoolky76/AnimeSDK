#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICSECURITYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E493530)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int GenericSecurityDescriptor_TypeDefinitionIndex = 983;

	class GenericSecurityDescriptor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICSECURITYDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}
