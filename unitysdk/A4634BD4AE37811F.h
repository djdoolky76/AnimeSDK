#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A4634BD4AE37811F_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x38B4270)
#define A4634BD4AE37811F_E751BCE805AD1B65_OFFSET UNITYSDK_OFFSET(0x38B43C0)
#define A4634BD4AE37811F_FE2AF5C35A75BD19_OFFSET UNITYSDK_OFFSET(0x38B4360)
#define A4634BD4AE37811F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4634BD4AE37811F_TypeDefinitionIndex = 20311;

class A4634BD4AE37811F : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_BC37316376A565D9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(A4634BD4AE37811F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void E751BCE805AD1B65()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A4634BD4AE37811F_E751BCE805AD1B65_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4634BD4AE37811F__CTOR_OFFSET))(this);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4634BD4AE37811F_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	static ::System::Void FE2AF5C35A75BD19()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A4634BD4AE37811F_FE2AF5C35A75BD19_OFFSET))();
	}
};
