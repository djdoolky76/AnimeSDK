#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsRootHitCallback; }
namespace RPG::GameCore { class TaskContext; }

#define BEHPMOMPAOM_CTOR_OFFSET UNITYSDK_OFFSET(0x16323770)
#define BEHPMOMPAOM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x163237A0)

	class BEHPMOMPAOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + BEHPMOMPAOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHPMOMPAOM_EVALUATE_OFFSET))(this);
		}

	};
