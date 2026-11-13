#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_SetAIVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define HPBLMIFJONB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2F4F0)
#define HPBLMIFJONB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF2F520)

inline static constexpr unsigned int HPBLMIFJONB_TypeDefinitionIndex = 53207;

	class HPBLMIFJONB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_SetAIVariableFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_SetAIVariableFloat*))((::PBYTE)hIl2Cpp + HPBLMIFJONB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBLMIFJONB_ONTASKBEGIN_OFFSET))(this);
		}

	};
