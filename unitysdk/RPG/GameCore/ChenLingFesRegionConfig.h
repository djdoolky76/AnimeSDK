#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesRegionCellConfig; }
namespace RPG::GameCore { class ChenLingFesRegionConfig; }
namespace RPG::GameCore { class ChenLingFesRegionItemConfig; }

#define RPG_GAMECORE_CHENLINGFESREGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D590650)
#define RPG_GAMECORE_CHENLINGFESREGIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D590660)
#define RPG_GAMECORE_CHENLINGFESREGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D590600)

namespace RPG::GameCore
{
	class ChenLingFesRegionConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingFesRegionCellConfig*>* CellList; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingFesRegionItemConfig*>* ItemList; // 0x18
		::System::UInt32 Length; // 0x20
		::System::UInt32 Width; // 0x24
		::RPG::MVector3 CameraCenterFollowOffset; // 0x28
		::RPG::MVector3 CameraCenterLookAtOffset; // 0x34
		::System::Single CameraFOV; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
