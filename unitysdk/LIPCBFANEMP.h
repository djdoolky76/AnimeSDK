#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define LIPCBFANEMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6DBE40)
#define LIPCBFANEMP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB6DBE70)

	class LIPCBFANEMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + LIPCBFANEMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCBFANEMP_EVALUATE_OFFSET))(this);
		}

	};
