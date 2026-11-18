#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHGOJLAPEJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D60D60)

inline static constexpr unsigned int DHGOJLAPEJC_TypeDefinitionIndex = 68495;

class DHGOJLAPEJC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DBKFKAGCBBI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DHGOJLAPEJC_TypeDefinitionIndex)->GetStaticField(0x40480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGOJLAPEJC__CCTOR_OFFSET))();
	}
};
