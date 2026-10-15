#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BySkipNextTeleportEffect; }
namespace RPG::GameCore { class TaskContext; }

#define HADJKOMJHMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B66640)
#define HADJKOMJHMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B66670)

inline static constexpr unsigned int HADJKOMJHMN_TypeDefinitionIndex = 53165;

	class HADJKOMJHMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + HADJKOMJHMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HADJKOMJHMN_EVALUATE_OFFSET))(this);
		}

	};
