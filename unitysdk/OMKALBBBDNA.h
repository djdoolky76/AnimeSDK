#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearRegardAsSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define OMKALBBBDNA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2FF60)
#define OMKALBBBDNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF2FF90)

inline static constexpr unsigned int OMKALBBBDNA_TypeDefinitionIndex = 54966;

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
