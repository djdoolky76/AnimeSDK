#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Mesh; }

#define AUTOSHADOWPROXYHOST_START_OFFSET UNITYSDK_OFFSET(0x14C28940)
#define AUTOSHADOWPROXYHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x14C28A10)

inline static constexpr unsigned int AutoShadowProxyHost_TypeDefinitionIndex = 86820;

class AutoShadowProxyHost : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single shadowProxyQuality; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::Mesh* customShadowProxy; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSHADOWPROXYHOST__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSHADOWPROXYHOST_START_OFFSET))(this);
	}
};
