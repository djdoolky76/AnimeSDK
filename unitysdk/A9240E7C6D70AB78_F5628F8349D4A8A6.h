#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define A9240E7C6D70AB78_F5628F8349D4A8A6_AFB495EB0BE789E2_OFFSET UNITYSDK_OFFSET(0x1B40EE0)
#define A9240E7C6D70AB78_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B411A0)
#define A9240E7C6D70AB78_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9240E7C6D70AB78_F5628F8349D4A8A6_TypeDefinitionIndex = 2151;

class A9240E7C6D70AB78_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A9240E7C6D70AB78_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A9240E7C6D70AB78_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A9240E7C6D70AB78_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::UInt32>** StaticGet_F2C54999C1BBBACC()
	{
		return (::System::ADDF5F55A85EB950<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(A9240E7C6D70AB78_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 AFB495EB0BE789E2(::System::UInt32 B35BBBE7E39341A2, ::System::UInt32 AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_F5628F8349D4A8A6_AFB495EB0BE789E2_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
