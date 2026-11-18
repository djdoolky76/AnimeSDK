#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOPMMEKJJIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B75A60)

inline static constexpr unsigned int JOPMMEKJJIL_TypeDefinitionIndex = 80603;

class JOPMMEKJJIL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CICNHAKJAJH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JOPMMEKJJIL_TypeDefinitionIndex)->GetStaticField(0x3E440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOPMMEKJJIL__CCTOR_OFFSET))();
	}
};
