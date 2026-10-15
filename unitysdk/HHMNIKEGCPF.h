#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsDirectKillBattle; }
namespace RPG::GameCore { class TaskContext; }

#define HHMNIKEGCPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4590)
#define HHMNIKEGCPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CD45C0)

	class HHMNIKEGCPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + HHMNIKEGCPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMNIKEGCPF_EVALUATE_OFFSET))(this);
		}

	};
