#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByGridFightTraitBonus; }
namespace RPG::GameCore { class TaskContext; }

#define BFMHEKHJPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x151B0720)
#define BFMHEKHJPPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x151B0800)

inline static constexpr unsigned int BFMHEKHJPPC_TypeDefinitionIndex = 56627;

	class BFMHEKHJPPC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus*))((::PBYTE)hIl2Cpp + BFMHEKHJPPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMHEKHJPPC_ONTASKBEGIN_OFFSET))(this);
		}

	};
