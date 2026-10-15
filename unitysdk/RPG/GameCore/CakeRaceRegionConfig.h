#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }

#define RPG_GAMECORE_CAKERACEREGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D524E20)
#define RPG_GAMECORE_CAKERACEREGIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D524E30)
#define RPG_GAMECORE_CAKERACEREGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D524DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceRegionConfig_TypeDefinitionIndex = 18424;

	class CakeRaceRegionConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionCellConfig*>* CellList; // 0x18
		::System::UInt32 Length; // 0x20
		::System::UInt32 Width; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
