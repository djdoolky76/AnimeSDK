#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OKPIABKELDN__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C240)

inline static constexpr unsigned int OKPIABKELDN_TypeDefinitionIndex = 39933;

class OKPIABKELDN : public ::System::Object
{
public:
	::System::String* BNGELKIKKDF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIABKELDN__CTOR_OFFSET))(this);
	}
};
