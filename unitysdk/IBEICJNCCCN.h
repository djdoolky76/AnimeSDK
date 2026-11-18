#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBCHHDJFCHG;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IBEICJNCCCN_CHLHFJCLLNC_OFFSET UNITYSDK_OFFSET(0xEA10290)
#define IBEICJNCCCN__CTOR_OFFSET UNITYSDK_OFFSET(0xEA10280)

inline static constexpr unsigned int IBEICJNCCCN_TypeDefinitionIndex = 65076;

class IBEICJNCCCN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEICJNCCCN__CTOR_OFFSET))(this);
	}

	static ::FBCHHDJFCHG* CHLHFJCLLNC(::System::String* ABOMFKBGCAJ, ::UnityEngine::Transform* JNLBPMKIFNK, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::UnityEngine::LayerMask FBNGKPGLADH)
	{
		return ((::FBCHHDJFCHG*(*)(::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + IBEICJNCCCN_CHLHFJCLLNC_OFFSET))(ABOMFKBGCAJ, JNLBPMKIFNK, OHOGDOMNHNK, BFBELMDIAHI, FBNGKPGLADH);
	}
};
