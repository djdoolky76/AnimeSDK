#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHCICCCFLDO__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3F7BA0)

inline static constexpr unsigned int KHCICCCFLDO_TypeDefinitionIndex = 92238;

class KHCICCCFLDO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FHEMBOJPDMB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KHCICCCFLDO_TypeDefinitionIndex)->GetStaticField(0x32970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCICCCFLDO__CCTOR_OFFSET))();
	}
};
