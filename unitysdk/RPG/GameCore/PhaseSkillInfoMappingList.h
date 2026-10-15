#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhaseSkillInfoMappingList; }

#define RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90B530)
#define RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90B470)

namespace RPG::GameCore
{
	class PhaseSkillInfoMappingList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* IdPerPhase; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhaseSkillInfoMappingList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhaseSkillInfoMappingList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
