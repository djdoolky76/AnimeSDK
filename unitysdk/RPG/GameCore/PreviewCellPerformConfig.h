#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesPreviewCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreviewCellPerformConfig; }

#define RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D940AF0)
#define RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9408B0)

namespace RPG::GameCore
{
	class PreviewCellPerformConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesPreviewCellType Type; // 0x10
		::System::Single PositionX; // 0x14
		::System::Single PositionZ; // 0x18
		::System::Int32 ScaleX; // 0x1C
		::System::Int32 ScaleZ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreviewCellPerformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreviewCellPerformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
