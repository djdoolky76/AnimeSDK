#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class E19AE4479CE79D32;
class E33C6304575EE9AA;

#define ABC_STREAMING_ZONE_MONOZONE_BA4CC1E8924C6BA6_1_OFFSET UNITYSDK_OFFSET(0x18F1500)
#define ABC_STREAMING_ZONE_MONOZONE_BA4CC1E8924C6BA6_OFFSET UNITYSDK_OFFSET(0x18F15A0)
#define ABC_STREAMING_ZONE_MONOZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Streaming::Zone
{
	inline static constexpr unsigned int MonoZone_TypeDefinitionIndex = 1446;

	class MonoZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABC::Config::GUID ABDD3012CACA1F02; // 0x20
		::E19AE4479CE79D32* ZoneData; // 0x30
		::E33C6304575EE9AA* CoreZoneData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_STREAMING_ZONE_MONOZONE__CTOR_OFFSET))(this);
		}

		::System::Void BA4CC1E8924C6BA6(::ABC::Config::GUID F5AEFA05C9F71B82, ::E19AE4479CE79D32* ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Config::GUID, ::E19AE4479CE79D32*))((::PBYTE)hIl2Cpp + ABC_STREAMING_ZONE_MONOZONE_BA4CC1E8924C6BA6_OFFSET))(this, F5AEFA05C9F71B82, ACDE58E97E37D13C);
		}

		::System::Void BA4CC1E8924C6BA6_1(::ABC::Config::GUID F5AEFA05C9F71B82, ::E33C6304575EE9AA* ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Config::GUID, ::E33C6304575EE9AA*))((::PBYTE)hIl2Cpp + ABC_STREAMING_ZONE_MONOZONE_BA4CC1E8924C6BA6_1_OFFSET))(this, F5AEFA05C9F71B82, ACDE58E97E37D13C);
		}
	};
}
