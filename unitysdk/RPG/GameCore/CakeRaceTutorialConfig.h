#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceSectionConfig; }
namespace RPG::GameCore { class CakeRaceTutorialConfig; }

#define RPG_GAMECORE_CAKERACETUTORIALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D526070)
#define RPG_GAMECORE_CAKERACETUTORIALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5228F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTutorialConfig_TypeDefinitionIndex = 18407;

	class CakeRaceTutorialConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RandomSeed; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* CatIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRaceSectionConfig*>* SectionList; // 0x20
		::Il2CppArray<::System::UInt32>* BanBattleItemSectionIndexList; // 0x28
		::Il2CppArray<::System::UInt32>* BanNPCUseBattleItemSectionIndexList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETUTORIALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTutorialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTutorialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETUTORIALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
