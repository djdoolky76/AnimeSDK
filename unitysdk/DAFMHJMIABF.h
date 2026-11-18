#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DAFMHJMIABF__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F4C10)

inline static constexpr unsigned int DAFMHJMIABF_TypeDefinitionIndex = 67034;

class DAFMHJMIABF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MEPHAFPCMFC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DAFMHJMIABF_TypeDefinitionIndex)->GetStaticField(0x4F350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFMHJMIABF__CCTOR_OFFSET))();
	}
};
