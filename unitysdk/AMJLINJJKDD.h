#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetAbilityStartTimeStamp; }
namespace RPG::GameCore { class TaskContext; }

#define AMJLINJJKDD_CTOR_OFFSET UNITYSDK_OFFSET(0x163F2A70)
#define AMJLINJJKDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163F2AA0)

inline static constexpr unsigned int AMJLINJJKDD_TypeDefinitionIndex = 60120;

	class AMJLINJJKDD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + AMJLINJJKDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJLINJJKDD_ONTASKBEGIN_OFFSET))(this);
		}

	};
