#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }

#define BAKETRAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F9FB080)
#define BAKETRAIL_BAKE_OFFSET UNITYSDK_OFFSET(0x1F9FB140)
#define BAKETRAIL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F9FB110)
#define BAKETRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9FB500)

inline static constexpr unsigned int BakeTrail_TypeDefinitionIndex = 33095;

class BakeTrail : public ::UnityEngine::MonoBehaviour
{
public:
	::Ara::AraTrail* trail; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL_UPDATE_OFFSET))(this);
	}

	::System::Void Bake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKETRAIL_BAKE_OFFSET))(this);
	}
};
