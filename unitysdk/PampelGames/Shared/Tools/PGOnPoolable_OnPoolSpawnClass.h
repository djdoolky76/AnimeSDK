#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PampelGames/Shared/Tools/PGOnPoolable_E4233C1140693720.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityEvent; }

#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_ONPOOLSPAWNCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int PGOnPoolable_OnPoolSpawnClass_TypeDefinitionIndex = 21173;

	class PGOnPoolable_OnPoolSpawnClass : public ::System::Object
	{
	public:
		::PampelGames::Shared::Tools::PGOnPoolable_E4233C1140693720 setDelay; // 0x10
		::System::Single delaySeconds; // 0x14
		::System::Int32 delayFrames; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Events::UnityEvent* onPoolSpawn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_ONPOOLSPAWNCLASS__CTOR_OFFSET))(this);
		}
	};
}
