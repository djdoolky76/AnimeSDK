#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONHPIGFLOGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x136C01F0)

inline static constexpr unsigned int ONHPIGFLOGF_TypeDefinitionIndex = 88062;

class ONHPIGFLOGF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JMHGJMNHNBB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ONHPIGFLOGF_TypeDefinitionIndex)->GetStaticField(0x3CE80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHPIGFLOGF__CCTOR_OFFSET))();
	}
};
