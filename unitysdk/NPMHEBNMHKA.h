#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPMHEBNMHKA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F45260)

inline static constexpr unsigned int NPMHEBNMHKA_TypeDefinitionIndex = 89477;

class NPMHEBNMHKA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GCMDEPHHHJD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPMHEBNMHKA_TypeDefinitionIndex)->GetStaticField(0x49130);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPMHEBNMHKA__CCTOR_OFFSET))();
	}
};
