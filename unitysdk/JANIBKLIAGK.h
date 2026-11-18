#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JANIBKLIAGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ABD9A0)

inline static constexpr unsigned int JANIBKLIAGK_TypeDefinitionIndex = 75245;

class JANIBKLIAGK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BMAECMLHAHP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JANIBKLIAGK_TypeDefinitionIndex)->GetStaticField(0x51F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANIBKLIAGK__CCTOR_OFFSET))();
	}
};
