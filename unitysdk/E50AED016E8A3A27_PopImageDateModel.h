#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/E6AC2088FF2A1246.h"
#include "unitysdk/System/Object.h"

#define E50AED016E8A3A27_POPIMAGEDATEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E50AED016E8A3A27_PopImageDateModel_TypeDefinitionIndex = 12081;

class E50AED016E8A3A27_PopImageDateModel : public ::System::Object
{
public:
	::System::Int32 id; // 0x10
	::BED79290917896D4::E6AC2088FF2A1246 mode; // 0x14
	::System::Int32 days; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E50AED016E8A3A27_POPIMAGEDATEMODEL__CTOR_OFFSET))(this);
	}
};
