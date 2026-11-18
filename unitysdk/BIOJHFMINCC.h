#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define BIOJHFMINCC__CTOR_OFFSET UNITYSDK_OFFSET(0x115EB7E0)

inline static constexpr unsigned int BIOJHFMINCC_TypeDefinitionIndex = 83653;

class BIOJHFMINCC : public ::System::EventArgs
{
public:
	::System::Int32 POBBHBJOIOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOJHFMINCC__CTOR_OFFSET))(this);
	}
};
