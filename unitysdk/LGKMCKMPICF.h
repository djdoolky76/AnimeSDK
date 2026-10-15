#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAngle; }
namespace RPG::GameCore { class TaskContext; }

#define LGKMCKMPICF_CTOR_OFFSET UNITYSDK_OFFSET(0xB693A70)
#define LGKMCKMPICF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB693AA0)

inline static constexpr unsigned int LGKMCKMPICF_TypeDefinitionIndex = 54480;

	class LGKMCKMPICF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + LGKMCKMPICF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMCKMPICF_EVALUATE_OFFSET))(this);
		}

	};
