#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class ByTargetContainerRatioInRect; }
namespace RPG::GameCore { class TaskContext; }

#define CMJCJGOBAPL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA30960)
#define CMJCJGOBAPL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA30A40)

inline static constexpr unsigned int CMJCJGOBAPL_TypeDefinitionIndex = 53166;

	class CMJCJGOBAPL
	{
	public:
		::RPG::GameCore::StringHash EDHAHBLOCKB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + CMJCJGOBAPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCJGOBAPL_EVALUATE_OFFSET))(this);
		}

	};
