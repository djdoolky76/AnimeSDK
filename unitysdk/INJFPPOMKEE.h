#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INJFPPOMKEE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AB3D30)

inline static constexpr unsigned int INJFPPOMKEE_TypeDefinitionIndex = 53684;

class INJFPPOMKEE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ACIOFAOKHIC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(INJFPPOMKEE_TypeDefinitionIndex)->GetStaticField(0x4F670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJFPPOMKEE__CCTOR_OFFSET))();
	}
};
