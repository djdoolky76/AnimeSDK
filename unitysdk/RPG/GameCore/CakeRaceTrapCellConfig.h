#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellParamConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRAPCELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553640)
#define RPG_GAMECORE_CAKERACETRAPCELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553440)

namespace RPG::GameCore
{
	class CakeRaceTrapCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::RPG::GameCore::CakeRaceCellType CellType; // 0x18
		::System::UInt32 GridChangeOffset; // 0x1C
		::RPG::GameCore::CakeRaceMoveStateConfig* MoveStateConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::CakeRaceTrapCellParamConfig*>* ParamsConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTrapCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTrapCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
