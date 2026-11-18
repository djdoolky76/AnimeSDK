#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DDHOLKFBOPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A30570)

inline static constexpr unsigned int DDHOLKFBOPD_TypeDefinitionIndex = 79709;

class DDHOLKFBOPD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ACLKDHOLGNN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DDHOLKFBOPD_TypeDefinitionIndex)->GetStaticField(0x4B710);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHOLKFBOPD__CCTOR_OFFSET))();
	}
};
