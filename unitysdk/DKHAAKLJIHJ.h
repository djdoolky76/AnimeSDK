#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSubMissionState; }
namespace RPG::GameCore { class TaskContext; }

#define DKHAAKLJIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF876410)
#define DKHAAKLJIHJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF876440)

inline static constexpr unsigned int DKHAAKLJIHJ_TypeDefinitionIndex = 52593;

	class DKHAAKLJIHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + DKHAAKLJIHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAKLJIHJ_EVALUATE_OFFSET))(this);
		}

	};
