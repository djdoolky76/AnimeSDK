#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLAKIEODEMJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14970F90)

inline static constexpr unsigned int CLAKIEODEMJ_TypeDefinitionIndex = 70355;

class CLAKIEODEMJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OIPGBFILLLF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CLAKIEODEMJ_TypeDefinitionIndex)->GetStaticField(0x31290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLAKIEODEMJ__CCTOR_OFFSET))();
	}
};
