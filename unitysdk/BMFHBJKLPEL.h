#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareWaveCount; }
namespace RPG::GameCore { class TaskContext; }

#define BMFHBJKLPEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA0BF0)
#define BMFHBJKLPEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDA0C20)

inline static constexpr unsigned int BMFHBJKLPEL_TypeDefinitionIndex = 54589;

	class BMFHBJKLPEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + BMFHBJKLPEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFHBJKLPEL_EVALUATE_OFFSET))(this);
		}

	};
