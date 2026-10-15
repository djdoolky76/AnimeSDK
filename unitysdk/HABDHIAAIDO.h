#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackAIUpperGroup; }
namespace RPG::GameCore { class TaskContext; }

#define HABDHIAAIDO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B70680)
#define HABDHIAAIDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B706B0)

inline static constexpr unsigned int HABDHIAAIDO_TypeDefinitionIndex = 47613;

	class HABDHIAAIDO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackAIUpperGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackAIUpperGroup*))((::PBYTE)hIl2Cpp + HABDHIAAIDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABDHIAAIDO_ONTASKBEGIN_OFFSET))(this);
		}

	};
