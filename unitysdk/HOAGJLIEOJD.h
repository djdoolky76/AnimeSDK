#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class ST_ByExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define HOAGJLIEOJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9CEC0)
#define HOAGJLIEOJD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D9CF80)

inline static constexpr unsigned int HOAGJLIEOJD_TypeDefinitionIndex = 52190;

	class HOAGJLIEOJD
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + HOAGJLIEOJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAGJLIEOJD_EVALUATE_OFFSET))(this);
		}

	};
