#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFPNGFBPIBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x10100160)

inline static constexpr unsigned int HFPNGFBPIBI_TypeDefinitionIndex = 39138;

class HFPNGFBPIBI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GJMLLABCEOK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HFPNGFBPIBI_TypeDefinitionIndex)->GetStaticField(0x3B0A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFPNGFBPIBI__CCTOR_OFFSET))();
	}
};
