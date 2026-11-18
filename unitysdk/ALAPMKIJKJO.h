#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALAPMKIJKJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x144F65E0)

inline static constexpr unsigned int ALAPMKIJKJO_TypeDefinitionIndex = 62021;

class ALAPMKIJKJO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PMDLMIPKKPH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ALAPMKIJKJO_TypeDefinitionIndex)->GetStaticField(0x51BD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAPMKIJKJO__CCTOR_OFFSET))();
	}
};
