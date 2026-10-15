#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckFloorCustomBoolV2; }
namespace RPG::GameCore { class TaskContext; }

#define PAFEMCBIJFA_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBFC20)
#define PAFEMCBIJFA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFBFC50)

inline static constexpr unsigned int PAFEMCBIJFA_TypeDefinitionIndex = 52551;

	class PAFEMCBIJFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + PAFEMCBIJFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFEMCBIJFA_EVALUATE_OFFSET))(this);
		}

	};
