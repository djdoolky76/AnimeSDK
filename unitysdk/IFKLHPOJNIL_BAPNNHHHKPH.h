#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFKLHPOJNIL;

#define IFKLHPOJNIL_BAPNNHHHKPH_JALNLDOINLB_OFFSET UNITYSDK_OFFSET(0x141C18F0)
#define IFKLHPOJNIL_BAPNNHHHKPH__CTOR_OFFSET UNITYSDK_OFFSET(0x141C18E0)

inline static constexpr unsigned int IFKLHPOJNIL_BAPNNHHHKPH_TypeDefinitionIndex = 78293;

class IFKLHPOJNIL_BAPNNHHHKPH : public ::System::Object
{
public:
	::IFKLHPOJNIL* KLHPEBKNIFB; // 0x10
	::System::Boolean AMGAAHMANDM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKLHPOJNIL_BAPNNHHHKPH__CTOR_OFFSET))(this);
	}

	::System::Void JALNLDOINLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKLHPOJNIL_BAPNNHHHKPH_JALNLDOINLB_OFFSET))(this);
	}
};
