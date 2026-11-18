#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABFJCJOECFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16435FB0)

inline static constexpr unsigned int ABFJCJOECFP_TypeDefinitionIndex = 39912;

class ABFJCJOECFP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IHFHCJMFOGK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ABFJCJOECFP_TypeDefinitionIndex)->GetStaticField(0x495C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFJCJOECFP__CCTOR_OFFSET))();
	}
};
