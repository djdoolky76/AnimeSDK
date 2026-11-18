#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKPBGPINIMP__CCTOR_OFFSET UNITYSDK_OFFSET(0xF19AF20)

inline static constexpr unsigned int OKPBGPINIMP_TypeDefinitionIndex = 88343;

class OKPBGPINIMP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HNHHEFAAEDE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OKPBGPINIMP_TypeDefinitionIndex)->GetStaticField(0x47820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKPBGPINIMP__CCTOR_OFFSET))();
	}
};
