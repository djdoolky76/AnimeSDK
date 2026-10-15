#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareScepterMainUnitEffectTag; }
namespace RPG::GameCore { class TaskContext; }

#define HFGAFLCIOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C79100)
#define HFGAFLCIOGJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C79130)

inline static constexpr unsigned int HFGAFLCIOGJ_TypeDefinitionIndex = 54890;

	class HFGAFLCIOGJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + HFGAFLCIOGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGAFLCIOGJ_EVALUATE_OFFSET))(this);
		}

	};
