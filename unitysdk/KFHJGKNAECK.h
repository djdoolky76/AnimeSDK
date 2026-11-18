#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KFHJGKNAECK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1860E700)

inline static constexpr unsigned int KFHJGKNAECK_TypeDefinitionIndex = 91721;

class KFHJGKNAECK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OJFBKMHJFIA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KFHJGKNAECK_TypeDefinitionIndex)->GetStaticField(0x51FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFHJGKNAECK__CCTOR_OFFSET))();
	}
};
