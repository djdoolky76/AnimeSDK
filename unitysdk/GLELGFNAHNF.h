#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsCharacterChangeSource; }
namespace RPG::GameCore { class TaskContext; }

#define GLELGFNAHNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB0440)
#define GLELGFNAHNF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AB0470)

inline static constexpr unsigned int GLELGFNAHNF_TypeDefinitionIndex = 54840;

	class GLELGFNAHNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + GLELGFNAHNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELGFNAHNF_EVALUATE_OFFSET))(this);
		}

	};
