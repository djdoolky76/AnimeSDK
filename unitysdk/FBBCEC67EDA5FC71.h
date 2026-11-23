#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FBBCEC67EDA5FC71_A189C640AB0D36E2_OFFSET UNITYSDK_OFFSET(0x3F31DA0)
#define FBBCEC67EDA5FC71_A4555184A1656FFE_OFFSET UNITYSDK_OFFSET(0x2A41EB0)
#define FBBCEC67EDA5FC71_F8B4FA5B2334DB8E_OFFSET UNITYSDK_OFFSET(0x3F31CE0)
#define FBBCEC67EDA5FC71__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F31D20)
#define FBBCEC67EDA5FC71__CTOR_OFFSET UNITYSDK_OFFSET(0x1B09C00)

inline static constexpr unsigned int FBBCEC67EDA5FC71_TypeDefinitionIndex = 19940;

struct alignas(4) FBBCEC67EDA5FC71
{
	static ::System::Double* StaticGet_F2E034BB90FBF738()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(FBBCEC67EDA5FC71_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int64 B1CC8B5FBAF9FAD8; // 0x10

	/*
	static ::FBBCEC67EDA5FC71 F8B4FA5B2334DB8E()
	{
		return ((::FBBCEC67EDA5FC71(*)())((::PBYTE)hIl2Cpp + FBBCEC67EDA5FC71_F8B4FA5B2334DB8E_OFFSET))();
	}
	*/

	::System::Int64 A189C640AB0D36E2()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBCEC67EDA5FC71_A189C640AB0D36E2_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBCEC67EDA5FC71__CCTOR_OFFSET))();
	}

	::System::Void _ctor(::System::Int64 B1CC8B5FBAF9FAD8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FBBCEC67EDA5FC71__CTOR_OFFSET))(this, B1CC8B5FBAF9FAD8);
	}

	::System::Boolean A4555184A1656FFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBCEC67EDA5FC71_A4555184A1656FFE_OFFSET))(this);
	}
};
