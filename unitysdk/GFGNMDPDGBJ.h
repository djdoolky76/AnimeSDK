#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SO_TriggerGroupEvent; }
namespace RPG::GameCore { class TaskContext; }

#define GFGNMDPDGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x159F7230)
#define GFGNMDPDGBJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F7280)
#define GFGNMDPDGBJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159F74D0)

inline static constexpr unsigned int GFGNMDPDGBJ_TypeDefinitionIndex = 52126;

	class GFGNMDPDGBJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_TriggerGroupEvent*))((::PBYTE)hIl2Cpp + GFGNMDPDGBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGNMDPDGBJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGNMDPDGBJ_ONTASKRESET_OFFSET))(this);
		}

	};
