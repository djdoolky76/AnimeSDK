#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckAdvModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define GHPKEOKHHIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2DE90)
#define GHPKEOKHHIN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A2DEC0)

inline static constexpr unsigned int GHPKEOKHHIN_TypeDefinitionIndex = 54492;

	class GHPKEOKHHIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + GHPKEOKHHIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPKEOKHHIN_EVALUATE_OFFSET))(this);
		}

	};
