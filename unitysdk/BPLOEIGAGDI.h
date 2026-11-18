#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPLOEIGAGDI__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C5D600)

inline static constexpr unsigned int BPLOEIGAGDI_TypeDefinitionIndex = 40008;

class BPLOEIGAGDI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OHGPEGGAPEN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BPLOEIGAGDI_TypeDefinitionIndex)->GetStaticField(0x49780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPLOEIGAGDI__CCTOR_OFFSET))();
	}
};
