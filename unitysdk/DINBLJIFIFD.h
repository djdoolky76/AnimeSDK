#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetDeathDragonSkillButtonState; }
namespace RPG::GameCore { class TaskContext; }

#define DINBLJIFIFD_CTOR_OFFSET UNITYSDK_OFFSET(0xF2245F0)
#define DINBLJIFIFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF224620)

inline static constexpr unsigned int DINBLJIFIFD_TypeDefinitionIndex = 55395;

	class DINBLJIFIFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDeathDragonSkillButtonState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDeathDragonSkillButtonState*))((::PBYTE)hIl2Cpp + DINBLJIFIFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBLJIFIFD_ONTASKBEGIN_OFFSET))(this);
		}

	};
