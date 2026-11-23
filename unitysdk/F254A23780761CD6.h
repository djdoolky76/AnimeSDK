#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF77401A7A93A9F7_E362F7B568182313.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F254A23780761CD6_A3075ECF5D1432AA_OFFSET UNITYSDK_OFFSET(0x21CE880)
#define F254A23780761CD6_A582974AEB897C19_OFFSET UNITYSDK_OFFSET(0x21CE800)

inline static constexpr unsigned int F254A23780761CD6_TypeDefinitionIndex = 8961;

class F254A23780761CD6 : public ::System::Object
{
public:
	static ::System::String* A3075ECF5D1432AA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F254A23780761CD6_A3075ECF5D1432AA_OFFSET))();
	}

	static ::EF77401A7A93A9F7_E362F7B568182313 A582974AEB897C19()
	{
		return ((::EF77401A7A93A9F7_E362F7B568182313(*)())((::PBYTE)hIl2Cpp + F254A23780761CD6_A582974AEB897C19_OFFSET))();
	}
};
