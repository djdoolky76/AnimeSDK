#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtStopMove; }
namespace RPG::GameCore { class TaskContext; }

#define LNPKOIJGLCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ED070)
#define LNPKOIJGLCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7ED0A0)

	class LNPKOIJGLCB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStopMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStopMove*))((::PBYTE)hIl2Cpp + LNPKOIJGLCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPKOIJGLCB_ONTASKBEGIN_OFFSET))(this);
		}

	};
