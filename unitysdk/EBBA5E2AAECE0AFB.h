#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class LODGroup; }

#define EBBA5E2AAECE0AFB_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x387DA60)
#define EBBA5E2AAECE0AFB_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x387D760)
#define EBBA5E2AAECE0AFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int EBBA5E2AAECE0AFB_TypeDefinitionIndex = 18067;

class EBBA5E2AAECE0AFB : public ::System::Object
{
public:
	::UnityEngine::LODGroup* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::LODGroup* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + EBBA5E2AAECE0AFB__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean E83F6F358E73B362(::EBBA5E2AAECE0AFB* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::EBBA5E2AAECE0AFB*))((::PBYTE)hIl2Cpp + EBBA5E2AAECE0AFB_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBA5E2AAECE0AFB_B201DD09DDF57516_OFFSET))(this);
	}
};
