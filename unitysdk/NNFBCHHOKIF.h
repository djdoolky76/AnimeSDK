#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByPropShowInfoId; }
namespace RPG::GameCore { class TaskContext; }

#define NNFBCHHOKIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA60D0)
#define NNFBCHHOKIF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCA6100)

inline static constexpr unsigned int NNFBCHHOKIF_TypeDefinitionIndex = 54476;

	class NNFBCHHOKIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + NNFBCHHOKIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFBCHHOKIF_EVALUATE_OFFSET))(this);
		}

	};
