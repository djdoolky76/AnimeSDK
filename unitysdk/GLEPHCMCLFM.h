#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GLEPHCMCLFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D5F3B0)

inline static constexpr unsigned int GLEPHCMCLFM_TypeDefinitionIndex = 56086;

class GLEPHCMCLFM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EADIANBFICN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GLEPHCMCLFM_TypeDefinitionIndex)->GetStaticField(0x4CF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLEPHCMCLFM__CCTOR_OFFSET))();
	}
};
