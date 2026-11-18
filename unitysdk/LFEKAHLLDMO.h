#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFEKAHLLDMO__CTOR_OFFSET UNITYSDK_OFFSET(0xD4275B0)

inline static constexpr unsigned int LFEKAHLLDMO_TypeDefinitionIndex = 38749;

class LFEKAHLLDMO : public ::System::Object
{
public:
	// static const ::System::Int32 GAEBJBFOMLJ = 0x4; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEKAHLLDMO__CTOR_OFFSET))(this);
	}
};
