#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsElfRestaurantFarmPlantFull; }
namespace RPG::GameCore { class TaskContext; }

#define KAAECPHEDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA5410)
#define KAAECPHEDBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19DA5440)

inline static constexpr unsigned int KAAECPHEDBE_TypeDefinitionIndex = 55817;

	class KAAECPHEDBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + KAAECPHEDBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAECPHEDBE_EVALUATE_OFFSET))(this);
		}

	};
