#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class StackWeakness; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define ABBLFHKKHGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EA380)
#define ABBLFHKKHGA_OJDEICKALEK_OFFSET UNITYSDK_OFFSET(0xB0EA720)
#define ABBLFHKKHGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0EA3B0)

	class ABBLFHKKHGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackWeakness* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackWeakness*))((::PBYTE)hIl2Cpp + ABBLFHKKHGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLFHKKHGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OJDEICKALEK(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + ABBLFHKKHGA_OJDEICKALEK_OFFSET))(this, a1, a2);
		}

	};
