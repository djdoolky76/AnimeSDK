#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshRenderer; }

#define F00A7301EC4F1B39_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3807DD0)
#define F00A7301EC4F1B39_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3807C90)
#define F00A7301EC4F1B39__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F00A7301EC4F1B39_TypeDefinitionIndex = 17838;

class F00A7301EC4F1B39 : public ::System::Object
{
public:
	::UnityEngine::MeshRenderer* BD8273AB04C4B760; // 0x10

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F00A7301EC4F1B39_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::F00A7301EC4F1B39* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F00A7301EC4F1B39*))((::PBYTE)hIl2Cpp + F00A7301EC4F1B39_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::MeshRenderer* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + F00A7301EC4F1B39__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
