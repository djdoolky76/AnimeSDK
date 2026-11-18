#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AGAGHDPPFLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE4970)

inline static constexpr unsigned int AGAGHDPPFLI_TypeDefinitionIndex = 92726;

class AGAGHDPPFLI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FFPEFEDBDOK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AGAGHDPPFLI_TypeDefinitionIndex)->GetStaticField(0x42CF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGAGHDPPFLI__CCTOR_OFFSET))();
	}
};
