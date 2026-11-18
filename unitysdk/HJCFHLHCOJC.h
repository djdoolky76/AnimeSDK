#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define HJCFHLHCOJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1494F090)

inline static constexpr unsigned int HJCFHLHCOJC_TypeDefinitionIndex = 76585;

class HJCFHLHCOJC : public ::System::Object
{
public:
	::System::Void _ctor(::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HJCFHLHCOJC__CTOR_OFFSET))(this, IAPKABMDJNF);
	}
};
