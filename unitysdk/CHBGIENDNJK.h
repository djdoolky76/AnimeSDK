#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHBGIENDNJK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A01970)

inline static constexpr unsigned int CHBGIENDNJK_TypeDefinitionIndex = 83556;

class CHBGIENDNJK : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_NDFHEOGIEHD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CHBGIENDNJK_TypeDefinitionIndex)->GetStaticField(0xC600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHBGIENDNJK__CCTOR_OFFSET))();
	}
};
