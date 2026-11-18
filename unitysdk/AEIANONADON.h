#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AEIANONADON__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B91640)

inline static constexpr unsigned int AEIANONADON_TypeDefinitionIndex = 62003;

class AEIANONADON : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LLJOPNMEKPI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AEIANONADON_TypeDefinitionIndex)->GetStaticField(0x3FF30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEIANONADON__CCTOR_OFFSET))();
	}
};
