#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLEDHJJPKAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11519600)

inline static constexpr unsigned int BLEDHJJPKAE_TypeDefinitionIndex = 57481;

class BLEDHJJPKAE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MKPNCGFOCPH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BLEDHJJPKAE_TypeDefinitionIndex)->GetStaticField(0x42E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEDHJJPKAE__CCTOR_OFFSET))();
	}
};
