#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPartialFlipDeviceState; }
namespace RPG::GameCore { class TaskContext; }

#define GBBBLEPACEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1593C4A0)
#define GBBBLEPACEC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1593C4D0)

inline static constexpr unsigned int GBBBLEPACEC_TypeDefinitionIndex = 52758;

	class GBBBLEPACEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + GBBBLEPACEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBBLEPACEC_EVALUATE_OFFSET))(this);
		}

	};
