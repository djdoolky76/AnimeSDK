#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_BySkillInCD; }
namespace RPG::GameCore { class TaskContext; }

#define GGGDIDGPJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x159F84D0)
#define GGGDIDGPJKG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159F8500)

inline static constexpr unsigned int GGGDIDGPJKG_TypeDefinitionIndex = 52202;

	class GGGDIDGPJKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + GGGDIDGPJKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGDIDGPJKG_EVALUATE_OFFSET))(this);
		}

	};
