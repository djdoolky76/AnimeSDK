#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueShopEnterBattle; }

#define FLKBLOHDPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15836070)
#define FLKBLOHDPFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158360A0)

inline static constexpr unsigned int FLKBLOHDPFH_TypeDefinitionIndex = 58800;

	class FLKBLOHDPFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueShopEnterBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueShopEnterBattle*))((::PBYTE)hIl2Cpp + FLKBLOHDPFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKBLOHDPFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
