#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByCompareMatchThreeV2BirdLocation; }
namespace RPG::GameCore { class TaskContext; }

#define LLNHBHAKDHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB774FA0)
#define LLNHBHAKDHI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB774FD0)

	class LLNHBHAKDHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + LLNHBHAKDHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNHBHAKDHI_EVALUATE_OFFSET))(this);
		}

	};
