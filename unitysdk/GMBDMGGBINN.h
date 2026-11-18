#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMBDMGGBINN__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A14E50)

inline static constexpr unsigned int GMBDMGGBINN_TypeDefinitionIndex = 85735;

class GMBDMGGBINN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EOEKMEMIMON()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GMBDMGGBINN_TypeDefinitionIndex)->GetStaticField(0x4F540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBDMGGBINN__CCTOR_OFFSET))();
	}
};
