#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace AK::Wwise { class AuxBus; }

#define AKEARLYREFLECTIONS_A1A188593DA209F2_OFFSET UNITYSDK_OFFSET(0x2915E60)
#define AKEARLYREFLECTIONS_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2915D90)
#define AKEARLYREFLECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x2915EF0)

inline static constexpr unsigned int AkEarlyReflections_TypeDefinitionIndex = 20459;

class AkEarlyReflections : public ::UnityEngine::MonoBehaviour
{
public:
	::AK::Wwise::AuxBus* reflectionsAuxBus; // 0x20
	::System::Single reflectionsVolume; // 0x28

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEARLYREFLECTIONS_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void A1A188593DA209F2(::System::Single B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKEARLYREFLECTIONS_A1A188593DA209F2_OFFSET))(this, B44B351D79166B65);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEARLYREFLECTIONS__CTOR_OFFSET))(this);
	}
};
