#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentRogueHasMiracle; }
namespace RPG::GameCore { class TaskContext; }

#define CCAANKIAPKC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4BA2A0)
#define CCAANKIAPKC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC4BA2D0)

	class CCAANKIAPKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + CCAANKIAPKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAANKIAPKC_EVALUATE_OFFSET))(this);
		}

	};
