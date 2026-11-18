#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CPMEODGJHDN__CCTOR_OFFSET UNITYSDK_OFFSET(0x145E23C0)

inline static constexpr unsigned int CPMEODGJHDN_TypeDefinitionIndex = 39454;

class CPMEODGJHDN : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_GFJBBBFFPDB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPMEODGJHDN_TypeDefinitionIndex)->GetStaticField(0xEB10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMEODGJHDN__CCTOR_OFFSET))();
	}
};
