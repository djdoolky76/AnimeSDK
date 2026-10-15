#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GroupInitMemberEntityTransform; }
namespace RPG::GameCore { class TaskContext; }

#define BHJBAJPFFPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB488E30)
#define BHJBAJPFFPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB488E60)

inline static constexpr unsigned int BHJBAJPFFPH_TypeDefinitionIndex = 52920;

	class BHJBAJPFFPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityTransform*))((::PBYTE)hIl2Cpp + BHJBAJPFFPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJBAJPFFPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
