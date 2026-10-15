#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetTeammateAttackPerform; }
namespace RPG::GameCore { class TaskContext; }

#define MPLMEBDFEPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA41880)
#define MPLMEBDFEPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA418B0)

inline static constexpr unsigned int MPLMEBDFEPK_TypeDefinitionIndex = 56385;

	class MPLMEBDFEPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTeammateAttackPerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTeammateAttackPerform*))((::PBYTE)hIl2Cpp + MPLMEBDFEPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLMEBDFEPK_ONTASKBEGIN_OFFSET))(this);
		}

	};
