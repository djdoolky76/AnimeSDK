#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyAddModifierBindValue; }
namespace RPG::GameCore { class TaskContext; }

#define EOOJOKNMMLF_CTOR_OFFSET UNITYSDK_OFFSET(0x16B2EF20)
#define EOOJOKNMMLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B2EF50)

inline static constexpr unsigned int EOOJOKNMMLF_TypeDefinitionIndex = 56369;

	class EOOJOKNMMLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAddModifierBindValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAddModifierBindValue*))((::PBYTE)hIl2Cpp + EOOJOKNMMLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOJOKNMMLF_ONTASKBEGIN_OFFSET))(this);
		}

	};
