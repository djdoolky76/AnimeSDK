#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace RPG::GameCore { class PreviewCellPerformConfig; }

#define RPG_GAMECORE_CHENLINGFESITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58E300)
#define RPG_GAMECORE_CHENLINGFESITEMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D58E310)
#define RPG_GAMECORE_CHENLINGFESITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58E2A0)

namespace RPG::GameCore
{
	class ChenLingFesItemConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Boolean AutoAbsorb; // 0x14
		::System::Boolean AutoAbsorbOnlyInit; // 0x15
		::System::Boolean IfPreviewIncome; // 0x16
		::System::Byte _padding0[0x1];
		::RPG::MVector2 Pivot; // 0x18
		::Il2CppArray<::RPG::GameCore::ChenLingFesPosition*>* OccupyCellList; // 0x20
		::Il2CppArray<::RPG::GameCore::ChenLingFesPosition*>* EffectCellList; // 0x28
		::Il2CppArray<::RPG::GameCore::ChenLingFesPosition*>* EffectItemList; // 0x30
		::Il2CppArray<::RPG::GameCore::PreviewCellPerformConfig*>* PreviewCellPerformList; // 0x38
		::System::Single OccupyEffectOffsetX; // 0x40
		::System::Single OccupyEffectOffsetZ; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
