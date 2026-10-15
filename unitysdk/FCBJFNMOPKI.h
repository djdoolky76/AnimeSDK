#pragma once
#include "unitysdk/unitysdk.h"
class HJCOLAEIJFM;
namespace RPG::GameCore { class ST_ByForceExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define FCBJFNMOPKI_CTOR_OFFSET UNITYSDK_OFFSET(0x156AFD40)
#define FCBJFNMOPKI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156AFE00)

inline static constexpr unsigned int FCBJFNMOPKI_TypeDefinitionIndex = 52191;

	class FCBJFNMOPKI
	{
	public:
		::HJCOLAEIJFM* POLAEJPLLPF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + FCBJFNMOPKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBJFNMOPKI_EVALUATE_OFFSET))(this);
		}

	};
