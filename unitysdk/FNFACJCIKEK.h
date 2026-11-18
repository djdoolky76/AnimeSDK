#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNFACJCIKEK__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C725B0)

inline static constexpr unsigned int FNFACJCIKEK_TypeDefinitionIndex = 49829;

class FNFACJCIKEK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GJGHCEDMFDA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FNFACJCIKEK_TypeDefinitionIndex)->GetStaticField(0x4CF10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNFACJCIKEK__CCTOR_OFFSET))();
	}
};
