#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareRogueMode; }
namespace RPG::GameCore { class TaskContext; }

#define DKOFLEAOAOI_CTOR_OFFSET UNITYSDK_OFFSET(0xF886CD0)
#define DKOFLEAOAOI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF886D00)

inline static constexpr unsigned int DKOFLEAOAOI_TypeDefinitionIndex = 54561;

	class DKOFLEAOAOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + DKOFLEAOAOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOFLEAOAOI_EVALUATE_OFFSET))(this);
		}

	};
