#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE65101F32BC67A3_E1440712AC7492E4;

#define BE65101F32BC67A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE65101F32BC67A3_TypeDefinitionIndex = 12027;

class BE65101F32BC67A3 : public ::System::Object
{
public:
	static ::BE65101F32BC67A3_E1440712AC7492E4** StaticGet_FFE48C4E24ECA21D()
	{
		return (::BE65101F32BC67A3_E1440712AC7492E4**)Il2CppClass::FromTypeDefinitionIndex(BE65101F32BC67A3_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::BE65101F32BC67A3_E1440712AC7492E4** StaticGet_A8C6382286A8A9C6()
	{
		return (::BE65101F32BC67A3_E1440712AC7492E4**)Il2CppClass::FromTypeDefinitionIndex(BE65101F32BC67A3_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::BE65101F32BC67A3_E1440712AC7492E4** StaticGet_FCB9772DC6029FC6()
	{
		return (::BE65101F32BC67A3_E1440712AC7492E4**)Il2CppClass::FromTypeDefinitionIndex(BE65101F32BC67A3_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE65101F32BC67A3__CTOR_OFFSET))(this);
	}
};
