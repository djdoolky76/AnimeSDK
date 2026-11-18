#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
namespace System { class Action; }

#define EKGAHGCJOAN_FHBAAABGOGL_IGFJGBDHJIC_OFFSET UNITYSDK_OFFSET(0x11A98510)
#define EKGAHGCJOAN_FHBAAABGOGL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98500)

inline static constexpr unsigned int EKGAHGCJOAN_FHBAAABGOGL_TypeDefinitionIndex = 51234;

class EKGAHGCJOAN_FHBAAABGOGL : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_FHBAAABGOGL__CTOR_OFFSET))(this);
	}

	::System::Void IGFJGBDHJIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_FHBAAABGOGL_IGFJGBDHJIC_OFFSET))(this);
	}
};
