#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideMonsterRankScore; }
namespace RPG::GameCore { class TaskContext; }

#define JPNGKLKEDJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CCE20)
#define JPNGKLKEDJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CCE50)

	class JPNGKLKEDJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideMonsterRankScore* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideMonsterRankScore*))((::PBYTE)hIl2Cpp + JPNGKLKEDJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGKLKEDJK_ONTASKBEGIN_OFFSET))(this);
		}

	};
