#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckCharacterFly; }
namespace RPG::GameCore { class TaskContext; }

#define HNMCIFIOMDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A378380)
#define HNMCIFIOMDJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A3783B0)

inline static constexpr unsigned int HNMCIFIOMDJ_TypeDefinitionIndex = 55659;

	class HNMCIFIOMDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + HNMCIFIOMDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMCIFIOMDJ_EVALUATE_OFFSET))(this);
		}

	};
