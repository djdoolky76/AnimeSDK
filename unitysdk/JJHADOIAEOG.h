#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
namespace Entitas { class ICleanupSystem; }
namespace Entitas { class ISystem; }

#define JJHADOIAEOG_CLEANUP_OFFSET UNITYSDK_OFFSET(0xB1FF9C0)
#define JJHADOIAEOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FF8D0)

inline static constexpr unsigned int JJHADOIAEOG_TypeDefinitionIndex = 76772;

	class JJHADOIAEOG : public ::System::Object
	{
	public:
		::Entitas::ICleanupSystem* KCOCCOGPBJB; // 0x10
		::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18
		::System::Void _ctor(::Entitas::ISystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + JJHADOIAEOG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHADOIAEOG_CLEANUP_OFFSET))(this);
		}

	};
