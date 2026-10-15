#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ExitBreakState; }
namespace RPG::GameCore { class TaskContext; }

#define DJCGNGINBAG_CTOR_OFFSET UNITYSDK_OFFSET(0xF2271F0)
#define DJCGNGINBAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF227220)

inline static constexpr unsigned int DJCGNGINBAG_TypeDefinitionIndex = 55028;

	class DJCGNGINBAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitBreakState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitBreakState*))((::PBYTE)hIl2Cpp + DJCGNGINBAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCGNGINBAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
