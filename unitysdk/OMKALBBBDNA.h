#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearRegardAsSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define OMKALBBBDNA_CTOR_OFFSET UNITYSDK_OFFSET(0xC82D830)
#define OMKALBBBDNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC82D860)

inline static constexpr unsigned int OMKALBBBDNA_TypeDefinitionIndex = 56140;

	class OMKALBBBDNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearRegardAsSkillType*))((::PBYTE)hIl2Cpp + OMKALBBBDNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKALBBBDNA_ONTASKBEGIN_OFFSET))(this);
		}

	};
