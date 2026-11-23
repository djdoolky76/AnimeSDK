#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/E6AC2088FF2A1246.h"
#include "unitysdk/System/Object.h"

#define BCFE3465708BC255_POPIMAGEDATEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BCFE3465708BC255_PopImageDateModel_TypeDefinitionIndex = 12200;

class BCFE3465708BC255_PopImageDateModel : public ::System::Object
{
public:
	::System::Int32 id; // 0x10
	::BED79290917896D4::E6AC2088FF2A1246 mode; // 0x14
	::System::Int32 days; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFE3465708BC255_POPIMAGEDATEMODEL__CTOR_OFFSET))(this);
	}
};
