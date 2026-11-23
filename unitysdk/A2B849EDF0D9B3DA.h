#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A2B849EDF0D9B3DA_B7255C705BAF30AF_OFFSET UNITYSDK_OFFSET(0x42380D0)
#define A2B849EDF0D9B3DA_E3D8161C53AE6671_OFFSET UNITYSDK_OFFSET(0x4237FD0)
#define A2B849EDF0D9B3DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x4238150)

inline static constexpr unsigned int A2B849EDF0D9B3DA_TypeDefinitionIndex = 13067;

class A2B849EDF0D9B3DA : public ::System::Object
{
public:
	static ::System::String** StaticGet_E1079EC888BF81E9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2B849EDF0D9B3DA_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_E34B8D70F67A4640()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2B849EDF0D9B3DA_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_F7BA5483A09CCFD0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2B849EDF0D9B3DA_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::String** StaticGet_BB707B6E311ADABE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2B849EDF0D9B3DA_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A2B849EDF0D9B3DA__CCTOR_OFFSET))();
	}

	static ::System::String* E3D8161C53AE6671(::System::Int32 ED5B4DAB9542128E)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + A2B849EDF0D9B3DA_E3D8161C53AE6671_OFFSET))(ED5B4DAB9542128E);
	}

	static ::System::Boolean B7255C705BAF30AF(::System::String* BCE492B6BB2EE533)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + A2B849EDF0D9B3DA_B7255C705BAF30AF_OFFSET))(BCE492B6BB2EE533);
	}
};
