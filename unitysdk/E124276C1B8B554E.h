#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Type; }

#define E124276C1B8B554E_B27B497866DBE384_OFFSET UNITYSDK_OFFSET(0x387BFA0)
#define E124276C1B8B554E_F8DDFEE7F8C52482_OFFSET UNITYSDK_OFFSET(0x23D9F80)
#define E124276C1B8B554E_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x387BD90)

inline static constexpr unsigned int E124276C1B8B554E_TypeDefinitionIndex = 18042;

class E124276C1B8B554E : public ::System::Object
{
public:
	::UnityEngine::Vector3 EB9C53744D09DA61; // 0x10

	::UnityEngine::Vector3 F8DDFEE7F8C52482()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + E124276C1B8B554E_F8DDFEE7F8C52482_OFFSET))(this);
	}

	::System::Type* B27B497866DBE384()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + E124276C1B8B554E_B27B497866DBE384_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::E124276C1B8B554E* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E124276C1B8B554E*))((::PBYTE)hIl2Cpp + E124276C1B8B554E_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
