#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define EKGAHGCJOAN_HIKGEJMNMGL_KJNNDBOBEFI_OFFSET UNITYSDK_OFFSET(0x1426C1B0)
#define EKGAHGCJOAN_HIKGEJMNMGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C1A0)

inline static constexpr unsigned int EKGAHGCJOAN_HIKGEJMNMGL_TypeDefinitionIndex = 51203;

class EKGAHGCJOAN_HIKGEJMNMGL : public ::System::Object
{
public:
	::System::String* PBDOFHOHDDJ; // 0x10
	::System::Action* BDLKAKKCAII; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_HIKGEJMNMGL__CTOR_OFFSET))(this);
	}

	::System::Void KJNNDBOBEFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_HIKGEJMNMGL_KJNNDBOBEFI_OFFSET))(this);
	}
};
