#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_REFLECTIONUSEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6650B0)

namespace XLua
{
	inline static constexpr unsigned int ReflectionUseAttribute_TypeDefinitionIndex = 5614;

	class ReflectionUseAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_REFLECTIONUSEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
