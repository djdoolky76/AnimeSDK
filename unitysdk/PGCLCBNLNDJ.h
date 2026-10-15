#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
namespace Entitas { class IExecuteSystem; }
namespace Entitas { class ISystem; }

#define PGCLCBNLNDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC21C820)
#define PGCLCBNLNDJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC21C910)

inline static constexpr unsigned int PGCLCBNLNDJ_TypeDefinitionIndex = 76772;

	class PGCLCBNLNDJ : public ::System::Object
	{
	public:
		::Entitas::IExecuteSystem* KCOCCOGPBJB; // 0x10
		::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18
		::System::Void _ctor(::Entitas::ISystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + PGCLCBNLNDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCLCBNLNDJ_EXECUTE_OFFSET))(this);
		}

	};
