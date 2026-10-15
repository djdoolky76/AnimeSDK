#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasSkillTag; }
namespace RPG::GameCore { class TaskContext; }

#define JECABBBBNIG_CTOR_OFFSET UNITYSDK_OFFSET(0x16619630)
#define JECABBBBNIG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16619660)

	class JECABBBBNIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + JECABBBBNIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JECABBBBNIG_EVALUATE_OFFSET))(this);
		}

	};
