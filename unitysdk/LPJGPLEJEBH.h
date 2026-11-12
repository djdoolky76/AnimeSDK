#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive; }
namespace RPG::GameCore { class TaskContext; }

#define LPJGPLEJEBH_CTOR_OFFSET UNITYSDK_OFFSET(0xC0838E0)
#define LPJGPLEJEBH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC083910)

inline static constexpr unsigned int LPJGPLEJEBH_TypeDefinitionIndex = 59218;

	class LPJGPLEJEBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + LPJGPLEJEBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJGPLEJEBH_EVALUATE_OFFSET))(this);
		}

	};
