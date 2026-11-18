#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define MACMKPDEHGH_HNPHKKFLCJP_OFFSET UNITYSDK_OFFSET(0x18522D70)
#define MACMKPDEHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x18523170)

inline static constexpr unsigned int MACMKPDEHGH_TypeDefinitionIndex = 48734;

class MACMKPDEHGH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACMKPDEHGH__CTOR_OFFSET))(this);
	}

	::UnityEngine::Animator* HNPHKKFLCJP(::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MACMKPDEHGH_HNPHKKFLCJP_OFFSET))(this, IAPKABMDJNF);
	}
};
