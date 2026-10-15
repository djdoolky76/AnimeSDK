#pragma once
#include "unitysdk/unitysdk.h"
class NOEBJBDLNGN;
namespace RPG::GameCore { class ST_ByContainAbnormalState; }
namespace RPG::GameCore { class TaskContext; }

#define LJLDAMPBAGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB71ECA0)
#define LJLDAMPBAGH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB71ED60)

	class LJLDAMPBAGH
	{
	public:
		::NOEBJBDLNGN* BBGDGPNAAJM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + LJLDAMPBAGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLDAMPBAGH_EVALUATE_OFFSET))(this);
		}

	};
