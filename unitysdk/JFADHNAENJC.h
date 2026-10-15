#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define JFADHNAENJC_CTOR_OFFSET UNITYSDK_OFFSET(0x16643470)
#define JFADHNAENJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166434A0)

	class JFADHNAENJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + JFADHNAENJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFADHNAENJC_ONTASKBEGIN_OFFSET))(this);
		}

	};
