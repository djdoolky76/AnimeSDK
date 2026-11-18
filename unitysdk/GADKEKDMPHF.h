#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GADKEKDMPHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x116D7440)

inline static constexpr unsigned int GADKEKDMPHF_TypeDefinitionIndex = 72284;

class GADKEKDMPHF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FFDDJIECENB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GADKEKDMPHF_TypeDefinitionIndex)->GetStaticField(0x40990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADKEKDMPHF__CCTOR_OFFSET))();
	}
};
