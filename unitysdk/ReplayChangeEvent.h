#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define REPLAYCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAFD70)

inline static constexpr unsigned int ReplayChangeEvent_TypeDefinitionIndex = 34759;

class ReplayChangeEvent : public ::System::Object
{
public:
	::System::String* propertyPath; // 0x10
	::System::Object* value; // 0x18
	::System::Single timestamp; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* stackTrace; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHANGEEVENT__CTOR_OFFSET))(this);
	}
};
