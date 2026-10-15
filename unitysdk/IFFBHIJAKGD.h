#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_ByAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define IFFBHIJAKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15F11340)
#define IFFBHIJAKGD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F11370)

	class IFFBHIJAKGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + IFFBHIJAKGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFBHIJAKGD_EVALUATE_OFFSET))(this);
		}

	};
