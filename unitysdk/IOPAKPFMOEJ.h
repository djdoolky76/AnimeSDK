#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLittleGameLevelVarShort; }
namespace RPG::GameCore { class TaskContext; }

#define IOPAKPFMOEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB850290)
#define IOPAKPFMOEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8502C0)

inline static constexpr unsigned int IOPAKPFMOEJ_TypeDefinitionIndex = 54127;

	class IOPAKPFMOEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + IOPAKPFMOEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAKPFMOEJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
