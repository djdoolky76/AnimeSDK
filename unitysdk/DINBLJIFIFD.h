#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetDeathDragonSkillButtonState; }
namespace RPG::GameCore { class TaskContext; }

#define DINBLJIFIFD_CTOR_OFFSET UNITYSDK_OFFSET(0x18ED9F00)
#define DINBLJIFIFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ED9F30)

inline static constexpr unsigned int DINBLJIFIFD_TypeDefinitionIndex = 56580;

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
