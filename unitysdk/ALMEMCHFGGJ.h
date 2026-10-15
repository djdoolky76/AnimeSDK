#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentRogueShopHasStage; }
namespace RPG::GameCore { class TaskContext; }

#define ALMEMCHFGGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1556F9C0)
#define ALMEMCHFGGJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1556F9F0)

inline static constexpr unsigned int ALMEMCHFGGJ_TypeDefinitionIndex = 53141;

	class ALMEMCHFGGJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + ALMEMCHFGGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMEMCHFGGJ_EVALUATE_OFFSET))(this);
		}

	};
