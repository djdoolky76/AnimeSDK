#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPreShowStanceBreak; }
namespace RPG::GameCore { class TaskContext; }

#define JHAEJFJGEEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A7E30)
#define JHAEJFJGEEK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1A7E60)

	class JHAEJFJGEEK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + JHAEJFJGEEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAEJFJGEEK_EVALUATE_OFFSET))(this);
		}

	};
