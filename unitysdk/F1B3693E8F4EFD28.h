#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E08A082FFF7F8B5C.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define F1B3693E8F4EFD28_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x272FBF0)
#define F1B3693E8F4EFD28_BF57C1EA5D1D1783_OFFSET UNITYSDK_OFFSET(0x272FD90)
#define F1B3693E8F4EFD28_E836DA5D3D1EB240_OFFSET UNITYSDK_OFFSET(0x272FCF0)
#define F1B3693E8F4EFD28_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x272FB20)
#define F1B3693E8F4EFD28_FD34F498AAA8AB86_OFFSET UNITYSDK_OFFSET(0x272F9B0)
#define F1B3693E8F4EFD28__CTOR_OFFSET UNITYSDK_OFFSET(0x272FD40)

inline static constexpr unsigned int F1B3693E8F4EFD28_TypeDefinitionIndex = 3021;

class F1B3693E8F4EFD28 : public ::E08A082FFF7F8B5C
{
public:
	static ::System::Single* StaticGet_A87311387A48C953()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(F1B3693E8F4EFD28_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Single* StaticGet_EBBD3E28D4899E6C()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(F1B3693E8F4EFD28_TypeDefinitionIndex)->GetStaticField(0x4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1B3693E8F4EFD28__CTOR_OFFSET))(this);
	}

	static ::System::Void BF57C1EA5D1D1783(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + F1B3693E8F4EFD28_BF57C1EA5D1D1783_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1B3693E8F4EFD28_A1E97155B145443C_OFFSET))(this);
	}

	static ::System::Void E836DA5D3D1EB240()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F1B3693E8F4EFD28_E836DA5D3D1EB240_OFFSET))();
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1B3693E8F4EFD28_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void FD34F498AAA8AB86(::E12F55A5FCCCF1EC EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + F1B3693E8F4EFD28_FD34F498AAA8AB86_OFFSET))(this, EB5670302F34D4B7);
	}
};
