#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AbortTargetSkill; }
namespace RPG::GameCore { class TaskContext; }

#define HGCHOICLHFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C91770)
#define HGCHOICLHFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C917A0)

inline static constexpr unsigned int HGCHOICLHFH_TypeDefinitionIndex = 52264;

	class HGCHOICLHFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AbortTargetSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AbortTargetSkill*))((::PBYTE)hIl2Cpp + HGCHOICLHFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCHOICLHFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
