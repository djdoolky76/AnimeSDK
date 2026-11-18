#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ODPKMAOJPIE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0F2D20)

inline static constexpr unsigned int ODPKMAOJPIE_TypeDefinitionIndex = 62407;

class ODPKMAOJPIE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HAGEJLPLEGI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ODPKMAOJPIE_TypeDefinitionIndex)->GetStaticField(0x50FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODPKMAOJPIE__CCTOR_OFFSET))();
	}
};
