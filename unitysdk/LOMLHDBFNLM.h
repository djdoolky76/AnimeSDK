#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DebateReturnTestimony; }
namespace RPG::GameCore { class TaskContext; }

#define LOMLHDBFNLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB80E140)
#define LOMLHDBFNLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80E170)

	class LOMLHDBFNLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateReturnTestimony* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateReturnTestimony*))((::PBYTE)hIl2Cpp + LOMLHDBFNLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMLHDBFNLM_ONTASKBEGIN_OFFSET))(this);
		}

	};
