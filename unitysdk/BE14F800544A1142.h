#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define BE14F800544A1142_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x38082A0)
#define BE14F800544A1142_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3807E20)
#define BE14F800544A1142__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int BE14F800544A1142_TypeDefinitionIndex = 17812;

class BE14F800544A1142 : public ::System::Object
{
public:
	::UnityEngine::Mesh* BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::BE14F800544A1142* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BE14F800544A1142*))((::PBYTE)hIl2Cpp + BE14F800544A1142_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BE14F800544A1142_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::Mesh* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + BE14F800544A1142__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
