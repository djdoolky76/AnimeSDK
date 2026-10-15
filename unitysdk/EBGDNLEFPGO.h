#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBossHPStanceChangeType; }
namespace RPG::GameCore { class TaskContext; }

#define EBGDNLEFPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEFC80)
#define EBGDNLEFPGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CEFCB0)

	class EBGDNLEFPGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBossHPStanceChangeType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBossHPStanceChangeType*))((::PBYTE)hIl2Cpp + EBGDNLEFPGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGDNLEFPGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
