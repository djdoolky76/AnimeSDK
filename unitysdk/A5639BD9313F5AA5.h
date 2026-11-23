#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

#define A5639BD9313F5AA5_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3CC36A0)
#define A5639BD9313F5AA5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B5AED0)
#define A5639BD9313F5AA5__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5AEC0)

inline static constexpr unsigned int A5639BD9313F5AA5_TypeDefinitionIndex = 10469;

class A5639BD9313F5AA5 : public ::AC5F5FB0FFBDC346
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5639BD9313F5AA5__CTOR_OFFSET))(this);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A5639BD9313F5AA5_A3345B9AC9D75C45_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::IntPtr B89933E721198EE1, ::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + A5639BD9313F5AA5__CTOR_1_OFFSET))(this, B89933E721198EE1, F61E953F737E3C7A);
	}
};
