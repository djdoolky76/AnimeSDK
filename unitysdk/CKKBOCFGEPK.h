#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetDynamicValueBySkillStanceValue; }
namespace RPG::GameCore { class TaskContext; }

#define CKKBOCFGEPK_CTOR_OFFSET UNITYSDK_OFFSET(0xD75FD40)
#define CKKBOCFGEPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD75FD70)

inline static constexpr unsigned int CKKBOCFGEPK_TypeDefinitionIndex = 55468;

	class CKKBOCFGEPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueBySkillStanceValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*))((::PBYTE)hIl2Cpp + CKKBOCFGEPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKBOCFGEPK_ONTASKBEGIN_OFFSET))(this);
		}

	};
