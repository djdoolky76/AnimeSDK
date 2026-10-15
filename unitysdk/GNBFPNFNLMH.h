#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsBattleReStart; }
namespace RPG::GameCore { class TaskContext; }

#define GNBFPNFNLMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFC120)
#define GNBFPNFNLMH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AFC150)

	class GNBFPNFNLMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + GNBFPNFNLMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFPNFNLMH_EVALUATE_OFFSET))(this);
		}

	};
