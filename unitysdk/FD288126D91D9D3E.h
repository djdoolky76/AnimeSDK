#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FD288126D91D9D3E_A80906BA6F626473_OFFSET UNITYSDK_OFFSET(0x25D5AC0)
#define FD288126D91D9D3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x25D5B60)
#define FD288126D91D9D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD288126D91D9D3E_TypeDefinitionIndex = 5622;

class FD288126D91D9D3E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_A68AEB2AC2444097()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FD288126D91D9D3E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_BADF78FEA66507CB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FD288126D91D9D3E_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Int32* StaticGet_A82BA6E41AEC8E11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FD288126D91D9D3E_TypeDefinitionIndex)->GetStaticField(0xC);
	}

	static ::System::Int32 A80906BA6F626473(::System::Int32 A7AB1C65BB07DA32, ::System::Int32 E773152D33E5230D)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FD288126D91D9D3E_A80906BA6F626473_OFFSET))(A7AB1C65BB07DA32, E773152D33E5230D);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD288126D91D9D3E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD288126D91D9D3E__CTOR_OFFSET))(this);
	}
};
