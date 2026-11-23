#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"

#define A41C2E0922E4709B__CCTOR_OFFSET UNITYSDK_OFFSET(0x443B770)
#define A41C2E0922E4709B__CTOR_OFFSET UNITYSDK_OFFSET(0x443E130)

inline static constexpr unsigned int A41C2E0922E4709B_TypeDefinitionIndex = 19020;

class A41C2E0922E4709B : public ::BF52BA61B7503140
{
public:
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_A40456C00C2BC7B5()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(A41C2E0922E4709B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_FB66DE31DA0BFB03()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A41C2E0922E4709B_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Int32* StaticGet_FF8D91CB165EB9E5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A41C2E0922E4709B_TypeDefinitionIndex)->GetStaticField(0xC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A41C2E0922E4709B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A41C2E0922E4709B__CCTOR_OFFSET))();
	}
};
