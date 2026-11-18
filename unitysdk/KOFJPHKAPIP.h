#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOFJPHKAPIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x129ACCB0)

inline static constexpr unsigned int KOFJPHKAPIP_TypeDefinitionIndex = 69379;

class KOFJPHKAPIP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HIKBHNMGBAE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KOFJPHKAPIP_TypeDefinitionIndex)->GetStaticField(0x414B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFJPHKAPIP__CCTOR_OFFSET))();
	}
};
