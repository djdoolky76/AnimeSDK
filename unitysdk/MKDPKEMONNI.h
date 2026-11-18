#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MKDPKEMONNI__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F54050)

inline static constexpr unsigned int MKDPKEMONNI_TypeDefinitionIndex = 75688;

class MKDPKEMONNI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FKLICAIGIOE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKDPKEMONNI_TypeDefinitionIndex)->GetStaticField(0x3E800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDPKEMONNI__CCTOR_OFFSET))();
	}
};
