#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"

#define B33338C5FAF76F67__CCTOR_OFFSET UNITYSDK_OFFSET(0x441F3F0)
#define B33338C5FAF76F67__CTOR_OFFSET UNITYSDK_OFFSET(0x441F9B0)

inline static constexpr unsigned int B33338C5FAF76F67_TypeDefinitionIndex = 18944;

class B33338C5FAF76F67 : public ::BF52BA61B7503140
{
public:
	static ::System::Int32* StaticGet_FB66DE31DA0BFB03()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B33338C5FAF76F67_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_FF8D91CB165EB9E5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B33338C5FAF76F67_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_A3BAE35CCB474911()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B33338C5FAF76F67_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_F1752B2F97F6A5D0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B33338C5FAF76F67_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_F7F31E224F4D77A6()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B33338C5FAF76F67_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_F764AB564F2DD35C()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(B33338C5FAF76F67_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	::System::Int32 A413C8C613DE4A54; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B33338C5FAF76F67__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B33338C5FAF76F67__CTOR_OFFSET))(this);
	}
};
