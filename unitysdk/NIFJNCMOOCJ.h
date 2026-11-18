#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIFJNCMOOCJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xE09DA00)

inline static constexpr unsigned int NIFJNCMOOCJ_TypeDefinitionIndex = 83521;

class NIFJNCMOOCJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IHKBIOCBPJA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NIFJNCMOOCJ_TypeDefinitionIndex)->GetStaticField(0x50EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFJNCMOOCJ__CCTOR_OFFSET))();
	}
};
