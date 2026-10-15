#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckCustomValueBool; }
namespace RPG::GameCore { class TaskContext; }

#define AJGMCPAKLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB7870)
#define AJGMCPAKLPJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12CB78A0)

inline static constexpr unsigned int AJGMCPAKLPJ_TypeDefinitionIndex = 54496;

	class AJGMCPAKLPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + AJGMCPAKLPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGMCPAKLPJ_EVALUATE_OFFSET))(this);
		}

	};
