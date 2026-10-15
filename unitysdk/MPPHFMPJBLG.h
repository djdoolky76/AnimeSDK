#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBattleTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define MPPHFMPJBLG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3F9A0)
#define MPPHFMPJBLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA3F9D0)

inline static constexpr unsigned int MPPHFMPJBLG_TypeDefinitionIndex = 58528;

	class MPPHFMPJBLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleTargetProgress*))((::PBYTE)hIl2Cpp + MPPHFMPJBLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHFMPJBLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
