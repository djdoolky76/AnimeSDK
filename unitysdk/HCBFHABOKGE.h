#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ExitGameFlow; }
namespace RPG::GameCore { class TaskContext; }

#define HCBFHABOKGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C09BE0)
#define HCBFHABOKGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C09C10)

inline static constexpr unsigned int HCBFHABOKGE_TypeDefinitionIndex = 58121;

	class HCBFHABOKGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitGameFlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitGameFlow*))((::PBYTE)hIl2Cpp + HCBFHABOKGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFHABOKGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
