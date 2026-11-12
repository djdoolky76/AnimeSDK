#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckActionDelayEffectType; }
namespace RPG::GameCore { class TaskContext; }

#define KNEMELCEFEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCFE00)
#define KNEMELCEFEB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDCFE30)

inline static constexpr unsigned int KNEMELCEFEB_TypeDefinitionIndex = 55655;

	class KNEMELCEFEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + KNEMELCEFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEMELCEFEB_EVALUATE_OFFSET))(this);
		}

	};
