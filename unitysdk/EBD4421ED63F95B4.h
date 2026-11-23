#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class FAED0374422E783A; }

#define EBD4421ED63F95B4_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3821680)
#define EBD4421ED63F95B4_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38661B0)
#define EBD4421ED63F95B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int EBD4421ED63F95B4_TypeDefinitionIndex = 17989;

class EBD4421ED63F95B4 : public ::System::Object
{
public:
	::UnityEngine::FAED0374422E783A* BD8273AB04C4B760; // 0x10

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBD4421ED63F95B4_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::EBD4421ED63F95B4* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::EBD4421ED63F95B4*))((::PBYTE)hIl2Cpp + EBD4421ED63F95B4_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::FAED0374422E783A* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::FAED0374422E783A*))((::PBYTE)hIl2Cpp + EBD4421ED63F95B4__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
