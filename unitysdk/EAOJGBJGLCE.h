#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EAOJGBJGLCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17220290)

inline static constexpr unsigned int EAOJGBJGLCE_TypeDefinitionIndex = 73945;

class EAOJGBJGLCE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JPEPDMNNHFB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EAOJGBJGLCE_TypeDefinitionIndex)->GetStaticField(0x4F410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAOJGBJGLCE__CCTOR_OFFSET))();
	}
};
