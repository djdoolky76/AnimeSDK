#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGIAGGLAKML__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFA650)

inline static constexpr unsigned int GGIAGGLAKML_TypeDefinitionIndex = 9367;

class GGIAGGLAKML : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIAGGLAKML__CTOR_OFFSET))(this);
	}
};
