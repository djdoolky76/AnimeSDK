#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNotifyAiSpecialEvent; }
namespace RPG::GameCore { class TaskContext; }

#define JLKPENLPDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB24F890)
#define JLKPENLPDHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB24F8C0)

inline static constexpr unsigned int JLKPENLPDHJ_TypeDefinitionIndex = 52447;

	class JLKPENLPDHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNotifyAiSpecialEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNotifyAiSpecialEvent*))((::PBYTE)hIl2Cpp + JLKPENLPDHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKPENLPDHJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
