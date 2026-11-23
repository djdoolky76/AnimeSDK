#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }

#define E0BC491E9AA30020_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3897500)
#define E0BC491E9AA30020_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38972F0)
#define E0BC491E9AA30020__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int E0BC491E9AA30020_TypeDefinitionIndex = 18130;

class E0BC491E9AA30020 : public ::System::Object
{
public:
	::UnityEngine::MeshFilter* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::MeshFilter* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + E0BC491E9AA30020__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean E83F6F358E73B362(::E0BC491E9AA30020* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E0BC491E9AA30020*))((::PBYTE)hIl2Cpp + E0BC491E9AA30020_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E0BC491E9AA30020_B201DD09DDF57516_OFFSET))(this);
	}
};
