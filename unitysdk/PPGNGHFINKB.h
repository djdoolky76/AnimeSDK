#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareHeartDialScriptEmo; }
namespace RPG::GameCore { class TaskContext; }

#define PPGNGHFINKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3867B0)
#define PPGNGHFINKB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3867E0)

inline static constexpr unsigned int PPGNGHFINKB_TypeDefinitionIndex = 52569;

	class PPGNGHFINKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + PPGNGHFINKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGNGHFINKB_EVALUATE_OFFSET))(this);
		}

	};
