#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBattleEndReason; }
namespace RPG::GameCore { class TaskContext; }

#define MOLGIANJMNM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2DA70)
#define MOLGIANJMNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA2DAA0)

inline static constexpr unsigned int MOLGIANJMNM_TypeDefinitionIndex = 55351;

	class MOLGIANJMNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleEndReason* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleEndReason*))((::PBYTE)hIl2Cpp + MOLGIANJMNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLGIANJMNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
