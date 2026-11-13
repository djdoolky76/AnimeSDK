#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropEvent; }
namespace RPG::GameCore { class TaskContext; }

#define PNMEKMAHJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x184C50A0)
#define PNMEKMAHJJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184C50D0)

inline static constexpr unsigned int PNMEKMAHJJC_TypeDefinitionIndex = 59697;

	class PNMEKMAHJJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*))((::PBYTE)hIl2Cpp + PNMEKMAHJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMEKMAHJJC_ONTASKBEGIN_OFFSET))(this);
		}

	};
