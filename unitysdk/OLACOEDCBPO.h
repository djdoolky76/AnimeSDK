#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDrinkMakerCheersStoryDrinkHasMade; }
namespace RPG::GameCore { class TaskContext; }

#define OLACOEDCBPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFDBD0)
#define OLACOEDCBPO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBEFDC00)

	class OLACOEDCBPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + OLACOEDCBPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLACOEDCBPO_EVALUATE_OFFSET))(this);
		}

	};
