#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByMainMissionFinish; }
namespace RPG::GameCore { class TaskContext; }

#define GKFBPFBKFEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A962F0)
#define GKFBPFBKFEJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A96320)

inline static constexpr unsigned int GKFBPFBKFEJ_TypeDefinitionIndex = 52603;

	class GKFBPFBKFEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + GKFBPFBKFEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFBPFBKFEJ_EVALUATE_OFFSET))(this);
		}

	};
