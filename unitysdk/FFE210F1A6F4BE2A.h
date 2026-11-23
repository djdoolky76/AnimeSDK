#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

#define FFE210F1A6F4BE2A_A253FF53ACAAA79D_OFFSET UNITYSDK_OFFSET(0x3BA2220)
#define FFE210F1A6F4BE2A_A87215EE848424E0_OFFSET UNITYSDK_OFFSET(0x3BA1F30)
#define FFE210F1A6F4BE2A_B9382ADDF574A8FC_OFFSET UNITYSDK_OFFSET(0x3BA2060)
#define FFE210F1A6F4BE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FFE210F1A6F4BE2A_TypeDefinitionIndex = 11144;

class FFE210F1A6F4BE2A : public ::System::Object
{
public:
	static ::FFE210F1A6F4BE2A** StaticGet_A0FD8842FE541332()
	{
		return (::FFE210F1A6F4BE2A**)Il2CppClass::FromTypeDefinitionIndex(FFE210F1A6F4BE2A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Object** StaticGet_AD9F6E907AE254E9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FFE210F1A6F4BE2A_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::DateTime A87215EE848424E0(::System::DateTime FF0A37159A523E06)
	{
		return ((::System::DateTime(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + FFE210F1A6F4BE2A_A87215EE848424E0_OFFSET))(this, FF0A37159A523E06);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFE210F1A6F4BE2A__CTOR_OFFSET))(this);
	}

	static ::FFE210F1A6F4BE2A* B9382ADDF574A8FC()
	{
		return ((::FFE210F1A6F4BE2A*(*)())((::PBYTE)hIl2Cpp + FFE210F1A6F4BE2A_B9382ADDF574A8FC_OFFSET))();
	}

	static ::System::Object* A253FF53ACAAA79D()
	{
		return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + FFE210F1A6F4BE2A_A253FF53ACAAA79D_OFFSET))();
	}
};
