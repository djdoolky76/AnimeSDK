#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TerrainData; }

#define AB941644993810C0_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3866B80)
#define AB941644993810C0_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3866580)
#define AB941644993810C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int AB941644993810C0_TypeDefinitionIndex = 17979;

class AB941644993810C0 : public ::System::Object
{
public:
	::UnityEngine::TerrainData* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::TerrainData* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + AB941644993810C0__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AB941644993810C0_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::AB941644993810C0* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AB941644993810C0*))((::PBYTE)hIl2Cpp + AB941644993810C0_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
