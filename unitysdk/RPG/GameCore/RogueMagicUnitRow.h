#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicSpecialType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }

#define RPG_GAMECORE_ROGUEMAGICUNITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20778530)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20777F30)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x20778540)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET UNITYSDK_OFFSET(0x20778650)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET UNITYSDK_OFFSET(0x20778640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitRow_TypeDefinitionIndex = 15040;

	class RogueMagicUnitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectID; // 0x18
		::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>* AttachRangeTypeList; // 0x20
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x28
		::System::UInt32 MagicUnitLevel; // 0x2C
		::RPG::GameCore::RogueMagicSpecialType SpecialType; // 0x30
		::System::UInt32 MagicUnitID; // 0x34
		::RPG::Client::TextID MagicUnitDesc; // 0x38
		::RPG::GameCore::RogueMagicRangeType LimitRange; // 0x48
		::System::UInt32 MagicUnitMazeBuffID; // 0x4C
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x50
		::RPG::GameCore::RogueMagicMountType MagicUnitType; // 0x54
		::RPG::GameCore::FixPoint UnitBasicPower; // 0x58
		::RPG::Client::TextID MagicUnitSimpleDesc; // 0x60
		::System::UInt32 UnlockID; // 0x70
		::RPG::GameCore::RogueMagicUnitCategory MagicUnitCategory; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicUnitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicUnitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET))(this);
		}

		::System::Boolean get_IsPassiveUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET))(this);
		}

		::System::Boolean get_IsActiveUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET))(this);
		}

	};
}
