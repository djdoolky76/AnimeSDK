#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B15A0F1CFC73F828;

#define B16A84068D64B217_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x21B07F0)
#define B16A84068D64B217_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x21B0760)
#define B16A84068D64B217__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B16A84068D64B217_TypeDefinitionIndex = 8856;

class B16A84068D64B217 : public ::System::Object
{
public:
	static ::B16A84068D64B217** StaticGet_F2EC524D6D748B5F()
	{
		return (::B16A84068D64B217**)Il2CppClass::FromTypeDefinitionIndex(B16A84068D64B217_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::B16A84068D64B217* A66245FDD0182C57()
	{
		return ((::B16A84068D64B217*(*)())((::PBYTE)hIl2Cpp + B16A84068D64B217_A66245FDD0182C57_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B16A84068D64B217__CTOR_OFFSET))(this);
	}

	::B15A0F1CFC73F828* BAF1A5AD9A18D2CF()
	{
		return ((::B15A0F1CFC73F828*(*)(::PVOID))((::PBYTE)hIl2Cpp + B16A84068D64B217_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
