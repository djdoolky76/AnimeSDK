#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A3B8D67F4F65E114.h"

#define A1C38CA9F8AB48E0_A7707407E75F19E3_OFFSET UNITYSDK_OFFSET(0x2665500)
#define A1C38CA9F8AB48E0_A8EC93CE446F827E_OFFSET UNITYSDK_OFFSET(0x2665750)
#define A1C38CA9F8AB48E0_EA30644669D974B0_OFFSET UNITYSDK_OFFSET(0x2665790)
#define A1C38CA9F8AB48E0_F07D584396EC9D0A_OFFSET UNITYSDK_OFFSET(0x2665610)
#define A1C38CA9F8AB48E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1C38CA9F8AB48E0_TypeDefinitionIndex = 6320;

class A1C38CA9F8AB48E0 : public ::System::Object
{
public:
	static ::UnityEngine::A3B8D67F4F65E114* StaticGet_A0B2CF7928920415()
	{
		return (::UnityEngine::A3B8D67F4F65E114*)Il2CppClass::FromTypeDefinitionIndex(A1C38CA9F8AB48E0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::A3B8D67F4F65E114* StaticGet_A558428E974137C8()
	{
		return (::UnityEngine::A3B8D67F4F65E114*)Il2CppClass::FromTypeDefinitionIndex(A1C38CA9F8AB48E0_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Int64* StaticGet_E10AC6ED1879F422()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(A1C38CA9F8AB48E0_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::System::Single* StaticGet_F6EBAFC33611E465()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(A1C38CA9F8AB48E0_TypeDefinitionIndex)->GetStaticField(0x28);
	}

	static ::System::Void EA30644669D974B0(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + A1C38CA9F8AB48E0_EA30644669D974B0_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void A7707407E75F19E3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A1C38CA9F8AB48E0_A7707407E75F19E3_OFFSET))();
	}

	static ::System::Void F07D584396EC9D0A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A1C38CA9F8AB48E0_F07D584396EC9D0A_OFFSET))();
	}

	static ::System::Void A8EC93CE446F827E(::System::Int64 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + A1C38CA9F8AB48E0_A8EC93CE446F827E_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1C38CA9F8AB48E0__CTOR_OFFSET))(this);
	}
};
