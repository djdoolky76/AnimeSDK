#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAKNHNAPONO;
class NEIACFLEDCC;

#define AAKNHNAPONO_PACDPLPHIME_MHLJGIMPEBF_OFFSET UNITYSDK_OFFSET(0x16FD2510)
#define AAKNHNAPONO_PACDPLPHIME__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD1770)

inline static constexpr unsigned int AAKNHNAPONO_PACDPLPHIME_TypeDefinitionIndex = 42755;

class AAKNHNAPONO_PACDPLPHIME : public ::System::Object
{
public:
	::AAKNHNAPONO* KLHPEBKNIFB; // 0x10
	::NEIACFLEDCC* CLGCNKFMLCN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNHNAPONO_PACDPLPHIME__CTOR_OFFSET))(this);
	}

	::System::Void MHLJGIMPEBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNHNAPONO_PACDPLPHIME_MHLJGIMPEBF_OFFSET))(this);
	}
};
