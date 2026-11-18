#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFDAGAONEJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1536E160)

inline static constexpr unsigned int DFDAGAONEJP_TypeDefinitionIndex = 39493;

class DFDAGAONEJP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ENNMFBIEKGA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DFDAGAONEJP_TypeDefinitionIndex)->GetStaticField(0x3A8F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDAGAONEJP__CCTOR_OFFSET))();
	}
};
