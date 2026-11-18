#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_TYPEDESCRIPTIONPROVIDERSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9229A0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int TypeDescriptionProviderService_TypeDefinitionIndex = 3028;

	class TypeDescriptionProviderService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_TYPEDESCRIPTIONPROVIDERSERVICE__CTOR_OFFSET))(this);
		}
	};
}
