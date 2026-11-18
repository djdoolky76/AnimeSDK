#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJAIBILPFLJ.h"
#include "unitysdk/System/Object.h"

#define IPBNPLCKABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC52A0)

inline static constexpr unsigned int IPBNPLCKABD_TypeDefinitionIndex = 85981;

class IPBNPLCKABD : public ::System::Object
{
public:
	::System::Int32 IGFNJDHPIPO; // 0x10
	::BJAIBILPFLJ MFKOLLFEOGK; // 0x14
	::System::Byte _padding0[0x2];
	::System::Int32 AAAAOJJPPGF; // 0x18
	::System::Int32 OPLPIOIDEEN; // 0x1C
	::System::Int32 DFCJLPNCGNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBNPLCKABD__CTOR_OFFSET))(this);
	}
};
