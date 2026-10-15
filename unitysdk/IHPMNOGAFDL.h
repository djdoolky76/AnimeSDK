#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define IHPMNOGAFDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1642E460)
#define IHPMNOGAFDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1642E490)

inline static constexpr unsigned int IHPMNOGAFDL_TypeDefinitionIndex = 54610;

	class IHPMNOGAFDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + IHPMNOGAFDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPMNOGAFDL_EVALUATE_OFFSET))(this);
		}

	};
