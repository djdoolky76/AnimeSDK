#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvAIRemeberGobackPosition; }
namespace RPG::GameCore { class TaskContext; }

#define BKJKFJKEHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA59A60)
#define BKJKFJKEHBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA59A90)

inline static constexpr unsigned int BKJKFJKEHBG_TypeDefinitionIndex = 52331;

	class BKJKFJKEHBG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAIRemeberGobackPosition*))((::PBYTE)hIl2Cpp + BKJKFJKEHBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJKFJKEHBG_ONTASKBEGIN_OFFSET))(this);
		}

	};
