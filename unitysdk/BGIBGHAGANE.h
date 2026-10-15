#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByPlantFesIsInSpineAnim; }
namespace RPG::GameCore { class TaskContext; }

#define BGIBGHAGANE_CTOR_OFFSET UNITYSDK_OFFSET(0xB187AE0)
#define BGIBGHAGANE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB187B10)

inline static constexpr unsigned int BGIBGHAGANE_TypeDefinitionIndex = 57992;

	class BGIBGHAGANE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + BGIBGHAGANE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIBGHAGANE_EVALUATE_OFFSET))(this);
		}

	};
