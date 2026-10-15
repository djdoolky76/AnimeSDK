#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsMatchTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define JNLHMIGDECO_CTOR_OFFSET UNITYSDK_OFFSET(0xB28BC40)
#define JNLHMIGDECO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB28BC70)

	class JNLHMIGDECO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + JNLHMIGDECO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLHMIGDECO_EVALUATE_OFFSET))(this);
		}

	};
