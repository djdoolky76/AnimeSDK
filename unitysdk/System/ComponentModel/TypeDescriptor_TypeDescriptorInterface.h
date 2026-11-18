#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTORINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1FEE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDescriptorInterface_TypeDefinitionIndex = 3007;

	class TypeDescriptor_TypeDescriptorInterface : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTORINTERFACE__CTOR_OFFSET))(this);
		}
	};
}
