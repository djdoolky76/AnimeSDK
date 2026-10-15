#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLittleGameLevelVarShort; }
namespace RPG::GameCore { class TaskContext; }

#define IOPAKPFMOEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1651BC10)
#define IOPAKPFMOEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1651BC40)

inline static constexpr unsigned int IOPAKPFMOEJ_TypeDefinitionIndex = 52968;

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
