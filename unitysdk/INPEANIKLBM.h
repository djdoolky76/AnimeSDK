#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetEntityFadeWithAnim; }
namespace RPG::GameCore { class TaskContext; }

#define INPEANIKLBM_CTOR_OFFSET UNITYSDK_OFFSET(0x164F8EF0)
#define INPEANIKLBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164F8F20)

inline static constexpr unsigned int INPEANIKLBM_TypeDefinitionIndex = 58585;

	class INPEANIKLBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetEntityFadeWithAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetEntityFadeWithAnim*))((::PBYTE)hIl2Cpp + INPEANIKLBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPEANIKLBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
