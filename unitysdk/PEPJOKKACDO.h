#pragma once
#include "unitysdk/unitysdk.h"
class DEEGAJPPPBG;
class EFHJJIGLPDL;
namespace RPG::GameCore { class ByInVision; }
namespace RPG::GameCore { class TaskContext; }

#define PEPJOKKACDO_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F89E0)
#define PEPJOKKACDO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC1F8B40)

	class PEPJOKKACDO
	{
	public:
		::EFHJJIGLPDL* AKEOLMPCBHA; // 0x28
		::DEEGAJPPPBG* MKDIGEHLFBH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + PEPJOKKACDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPJOKKACDO_EVALUATE_OFFSET))(this);
		}

	};
