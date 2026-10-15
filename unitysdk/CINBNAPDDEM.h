#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsUIPageOpen; }
namespace RPG::GameCore { class TaskContext; }

#define CINBNAPDDEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8ECF0)
#define CINBNAPDDEM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF8ED20)

inline static constexpr unsigned int CINBNAPDDEM_TypeDefinitionIndex = 52602;

	class CINBNAPDDEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + CINBNAPDDEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINBNAPDDEM_EVALUATE_OFFSET))(this);
		}

	};
