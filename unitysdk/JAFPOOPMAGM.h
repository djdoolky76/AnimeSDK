#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JAFPOOPMAGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x153C9000)

inline static constexpr unsigned int JAFPOOPMAGM_TypeDefinitionIndex = 52206;

class JAFPOOPMAGM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ALFEGMCBJFP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JAFPOOPMAGM_TypeDefinitionIndex)->GetStaticField(0x44420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAFPOOPMAGM__CCTOR_OFFSET))();
	}
};
