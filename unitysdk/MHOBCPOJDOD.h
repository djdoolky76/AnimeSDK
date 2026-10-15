#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBattleTargetID; }
namespace RPG::GameCore { class TaskContext; }

#define MHOBCPOJDOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB942450)
#define MHOBCPOJDOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB942530)

inline static constexpr unsigned int MHOBCPOJDOD_TypeDefinitionIndex = 58537;

	class MHOBCPOJDOD
	{
	public:
		::RPG::GameCore::StringHash EGPEIOOGMKD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*))((::PBYTE)hIl2Cpp + MHOBCPOJDOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOBCPOJDOD_ONTASKBEGIN_OFFSET))(this);
		}

	};
