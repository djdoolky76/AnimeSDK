#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKOAGCKONED__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A6A5F0)

inline static constexpr unsigned int OKOAGCKONED_TypeDefinitionIndex = 60104;

class OKOAGCKONED : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KNHIILMOBFC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OKOAGCKONED_TypeDefinitionIndex)->GetStaticField(0x4B1F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKOAGCKONED__CCTOR_OFFSET))();
	}
};
