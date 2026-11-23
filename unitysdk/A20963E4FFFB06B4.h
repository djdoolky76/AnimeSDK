#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

#define A20963E4FFFB06B4_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3E97790)
#define A20963E4FFFB06B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E977A0)
#define A20963E4FFFB06B4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B5AEC0)
#define A20963E4FFFB06B4__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B5AED0)
#define A20963E4FFFB06B4__CTOR_OFFSET UNITYSDK_OFFSET(0x3E97810)

inline static constexpr unsigned int A20963E4FFFB06B4_TypeDefinitionIndex = 14982;

class A20963E4FFFB06B4 : public ::AC5F5FB0FFBDC346
{
public:
	static ::A20963E4FFFB06B4** StaticGet_A949525347A6D0D5()
	{
		return (::A20963E4FFFB06B4**)Il2CppClass::FromTypeDefinitionIndex(A20963E4FFFB06B4_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor(::System::IntPtr E38FD399E4DFEF27)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + A20963E4FFFB06B4__CTOR_OFFSET))(this, E38FD399E4DFEF27);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A20963E4FFFB06B4__CCTOR_OFFSET))();
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A20963E4FFFB06B4__CTOR_1_OFFSET))(this);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A20963E4FFFB06B4_A3345B9AC9D75C45_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::IntPtr B89933E721198EE1, ::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + A20963E4FFFB06B4__CTOR_2_OFFSET))(this, B89933E721198EE1, F61E953F737E3C7A);
	}
};
