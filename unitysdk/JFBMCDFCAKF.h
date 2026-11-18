#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFBMCDFCAKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ACB860)

inline static constexpr unsigned int JFBMCDFCAKF_TypeDefinitionIndex = 82873;

class JFBMCDFCAKF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JIJEONCKOHN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JFBMCDFCAKF_TypeDefinitionIndex)->GetStaticField(0x51F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBMCDFCAKF__CCTOR_OFFSET))();
	}
};
