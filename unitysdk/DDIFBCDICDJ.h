#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ByCompareCharacterNumber; }
namespace RPG::GameCore { class TaskContext; }

#define DDIFBCDICDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE4DE710)
#define DDIFBCDICDJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE4DE7D0)

inline static constexpr unsigned int DDIFBCDICDJ_TypeDefinitionIndex = 54522;

	class DDIFBCDICDJ
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + DDIFBCDICDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIFBCDICDJ_EVALUATE_OFFSET))(this);
		}

	};
