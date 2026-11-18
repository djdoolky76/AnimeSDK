#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFCMGJAMIGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DD2C30)

inline static constexpr unsigned int GFCMGJAMIGK_TypeDefinitionIndex = 77568;

class GFCMGJAMIGK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LIEDCJLKJFH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GFCMGJAMIGK_TypeDefinitionIndex)->GetStaticField(0x51ED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCMGJAMIGK__CCTOR_OFFSET))();
	}
};
