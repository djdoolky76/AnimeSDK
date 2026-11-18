#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define HAECANEPEOH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D79F60)

inline static constexpr unsigned int HAECANEPEOH_TypeDefinitionIndex = 40382;

class HAECANEPEOH : public ::System::EventArgs
{
public:
	::System::Int32 GGKOKMJMLFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECANEPEOH__CTOR_OFFSET))(this);
	}
};
