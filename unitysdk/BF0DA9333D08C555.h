#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TerrainLayer; }

#define BF0DA9333D08C555_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3822010)
#define BF0DA9333D08C555_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3821AE0)
#define BF0DA9333D08C555__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int BF0DA9333D08C555_TypeDefinitionIndex = 17900;

class BF0DA9333D08C555 : public ::System::Object
{
public:
	::UnityEngine::TerrainLayer* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::TerrainLayer* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + BF0DA9333D08C555__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BF0DA9333D08C555_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::BF0DA9333D08C555* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BF0DA9333D08C555*))((::PBYTE)hIl2Cpp + BF0DA9333D08C555_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
