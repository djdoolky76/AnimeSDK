#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IONBPDLNCIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13825F60)

inline static constexpr unsigned int IONBPDLNCIH_TypeDefinitionIndex = 72361;

class IONBPDLNCIH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DJPEAGMAMON()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IONBPDLNCIH_TypeDefinitionIndex)->GetStaticField(0x3E1E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONBPDLNCIH__CCTOR_OFFSET))();
	}
};
