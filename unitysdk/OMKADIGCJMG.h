#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsScepter; }
namespace RPG::GameCore { class TaskContext; }

#define OMKADIGCJMG_CTOR_OFFSET UNITYSDK_OFFSET(0x17D571A0)
#define OMKADIGCJMG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D571D0)

inline static constexpr unsigned int OMKADIGCJMG_TypeDefinitionIndex = 56060;

	class OMKADIGCJMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + OMKADIGCJMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKADIGCJMG_EVALUATE_OFFSET))(this);
		}

	};
