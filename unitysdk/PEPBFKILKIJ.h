#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckDarkTeamDestroy; }
namespace RPG::GameCore { class TaskContext; }

#define PEPBFKILKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x14545DB0)
#define PEPBFKILKIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14545DE0)
#define PEPBFKILKIJ_OPDLLNNEBPF_OFFSET UNITYSDK_OFFSET(0x14545E30)

inline static constexpr unsigned int PEPBFKILKIJ_TypeDefinitionIndex = 59206;

	class PEPBFKILKIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + PEPBFKILKIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBFKILKIJ_EVALUATE_OFFSET))(this);
		}

		::System::Boolean OPDLLNNEBPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBFKILKIJ_OPDLLNNEBPF_OFFSET))(this);
		}

	};
