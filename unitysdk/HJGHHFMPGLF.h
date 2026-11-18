#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HJGHHFMPGLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CF4C30)

inline static constexpr unsigned int HJGHHFMPGLF_TypeDefinitionIndex = 87767;

class HJGHHFMPGLF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IKLHDHJMLOG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HJGHHFMPGLF_TypeDefinitionIndex)->GetStaticField(0x37B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJGHHFMPGLF__CCTOR_OFFSET))();
	}
};
