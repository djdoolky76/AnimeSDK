#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckTimelineEntityState; }
namespace RPG::GameCore { class TaskContext; }

#define EPCLIBOBPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x16B323D0)
#define EPCLIBOBPEN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16B32400)

inline static constexpr unsigned int EPCLIBOBPEN_TypeDefinitionIndex = 54528;

	class EPCLIBOBPEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + EPCLIBOBPEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCLIBOBPEN_EVALUATE_OFFSET))(this);
		}

	};
