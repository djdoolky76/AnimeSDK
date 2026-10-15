#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByGridFightTraitBonusCurrentLayer; }
namespace RPG::GameCore { class TaskContext; }

#define MPNAICMEJMH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA41A80)
#define MPNAICMEJMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA41B60)

inline static constexpr unsigned int MPNAICMEJMH_TypeDefinitionIndex = 55442;

	class MPNAICMEJMH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer*))((::PBYTE)hIl2Cpp + MPNAICMEJMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNAICMEJMH_ONTASKBEGIN_OFFSET))(this);
		}

	};
