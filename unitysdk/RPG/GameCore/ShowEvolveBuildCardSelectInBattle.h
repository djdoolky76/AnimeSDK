#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEvolveBuildCardSelectInBattle; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADB980)
#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADB990)
#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADB940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildCardSelectInBattle_TypeDefinitionIndex = 22513;

	class ShowEvolveBuildCardSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecifiedCardIDList; // 0x18
		::Il2CppArray<::System::UInt32>* BlacklistCardIDList; // 0x20
		::System::Boolean EnableReRoll; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
