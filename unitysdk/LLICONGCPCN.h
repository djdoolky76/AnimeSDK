#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBossLeftHP; }
namespace RPG::GameCore { class TaskContext; }

#define LLICONGCPCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB770030)
#define LLICONGCPCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB770110)

inline static constexpr unsigned int LLICONGCPCN_TypeDefinitionIndex = 55415;

	class LLICONGCPCN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBossLeftHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBossLeftHP*))((::PBYTE)hIl2Cpp + LLICONGCPCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLICONGCPCN_ONTASKBEGIN_OFFSET))(this);
		}

	};
