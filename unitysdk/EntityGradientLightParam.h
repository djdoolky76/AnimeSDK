#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENTITYGRADIENTLIGHTPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBC010)
#define ENTITYGRADIENTLIGHTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBC000)

inline static constexpr unsigned int EntityGradientLightParam_TypeDefinitionIndex = 26667;

class EntityGradientLightParam : public ::System::Object
{
public:
	static ::EntityGradientLightParam** StaticGet_Default()
	{
		return (::EntityGradientLightParam**)Il2CppClass::FromTypeDefinitionIndex(EntityGradientLightParam_TypeDefinitionIndex)->GetStaticField(0x22D60);
	}
	::System::Single gradientSize; // 0x10
	::System::Single offset; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYGRADIENTLIGHTPARAM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENTITYGRADIENTLIGHTPARAM__CCTOR_OFFSET))();
	}
};
