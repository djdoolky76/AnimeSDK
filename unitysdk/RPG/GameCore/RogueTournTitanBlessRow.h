#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournTitanBlessRow; }

#define RPG_GAMECORE_ROGUETOURNTITANBLESSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA41990)
#define RPG_GAMECORE_ROGUETOURNTITANBLESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA41680)

namespace RPG::GameCore
{
	class RogueTournTitanBlessRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueTitanCategory>* BlessBattleDisplayCategoryList; // 0x18
		::System::UInt32 MazeBuffID; // 0x20
		::System::Int32 BlessRatio; // 0x24
		::RPG::GameCore::RogueTitanType TitanType; // 0x28
		::System::UInt32 TitanBlessLevel; // 0x2C
		::System::UInt32 SpeedUpRatio; // 0x30
		::System::UInt32 TitanBlessID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANBLESSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournTitanBlessRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournTitanBlessRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANBLESSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
