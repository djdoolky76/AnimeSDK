#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowDamageText; }
namespace RPG::GameCore { class TaskContext; }

#define NALEJDDLPAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA6530)
#define NALEJDDLPAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAA6560)

	class NALEJDDLPAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDamageText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDamageText*))((::PBYTE)hIl2Cpp + NALEJDDLPAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEJDDLPAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
