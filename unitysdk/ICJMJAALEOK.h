#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/Object.h"

#define ICJMJAALEOK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA6870)

inline static constexpr unsigned int ICJMJAALEOK_TypeDefinitionIndex = 18291;

class ICJMJAALEOK : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::RegexOptions* StaticGet_JNNJCHHACEE()
	{
		return (::System::Text::RegularExpressions::RegexOptions*)Il2CppClass::FromTypeDefinitionIndex(ICJMJAALEOK_TypeDefinitionIndex)->GetStaticField(0x4260);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJMJAALEOK__CCTOR_OFFSET))();
	}
};
