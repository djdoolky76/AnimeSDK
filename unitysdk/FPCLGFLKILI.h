#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeDynamicOptionalBlock; }
namespace RPG::GameCore { class TaskContext; }

#define FPCLGFLKILI_CTOR_OFFSET UNITYSDK_OFFSET(0x168412A0)
#define FPCLGFLKILI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x168412D0)

inline static constexpr unsigned int FPCLGFLKILI_TypeDefinitionIndex = 53745;

	class FPCLGFLKILI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeDynamicOptionalBlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeDynamicOptionalBlock*))((::PBYTE)hIl2Cpp + FPCLGFLKILI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCLGFLKILI_ONTASKBEGIN_OFFSET))(this);
		}

	};
