#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
namespace Entitas { class IInitializeSystem; }
namespace Entitas { class ISystem; }

#define GOFGMFHDOFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B22630)
#define GOFGMFHDOFE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15B22700)

inline static constexpr unsigned int GOFGMFHDOFE_TypeDefinitionIndex = 76770;

	class GOFGMFHDOFE : public ::System::Object
	{
	public:
		::Entitas::IInitializeSystem* KCOCCOGPBJB; // 0x10
		::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18
		::System::Void _ctor(::Entitas::ISystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + GOFGMFHDOFE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGMFHDOFE_INITIALIZE_OFFSET))(this);
		}

	};
