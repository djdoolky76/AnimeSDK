#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B59EC1E81B13CFAA;

#define ABC9E6EFCA551F78_B3268589C4DE7060_OFFSET UNITYSDK_OFFSET(0x39C5090)
#define ABC9E6EFCA551F78_E751BCE805AD1B65_OFFSET UNITYSDK_OFFSET(0x39C5370)
#define ABC9E6EFCA551F78_FE2AF5C35A75BD19_OFFSET UNITYSDK_OFFSET(0x39C50F0)
#define ABC9E6EFCA551F78__CCTOR_OFFSET UNITYSDK_OFFSET(0x39C55F0)
#define ABC9E6EFCA551F78__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABC9E6EFCA551F78_TypeDefinitionIndex = 12593;

class ABC9E6EFCA551F78 : public ::System::Object
{
public:
	static ::ABC9E6EFCA551F78** StaticGet_EE999965A1D2099B()
	{
		return (::ABC9E6EFCA551F78**)Il2CppClass::FromTypeDefinitionIndex(ABC9E6EFCA551F78_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::B59EC1E81B13CFAA** StaticGet_BBFE01F5CA8D9382()
	{
		return (::B59EC1E81B13CFAA**)Il2CppClass::FromTypeDefinitionIndex(ABC9E6EFCA551F78_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Boolean* StaticGet_BE9903A2AEF95A45()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ABC9E6EFCA551F78_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	::System::Void E751BCE805AD1B65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC9E6EFCA551F78_E751BCE805AD1B65_OFFSET))(this);
	}

	::System::Void B3268589C4DE7060(::System::Boolean FBF3AC291087F95C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC9E6EFCA551F78_B3268589C4DE7060_OFFSET))(this, FBF3AC291087F95C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC9E6EFCA551F78__CCTOR_OFFSET))();
	}

	::System::Void FE2AF5C35A75BD19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC9E6EFCA551F78_FE2AF5C35A75BD19_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC9E6EFCA551F78__CTOR_OFFSET))(this);
	}
};
