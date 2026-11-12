#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ItemFoodTargetType.h"
#include "unitysdk/RPG/GameCore/ItemFoodUseTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemUseBuffDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMUSEBUFFDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E13A0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9E0880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseBuffDataRow_TypeDefinitionIndex = 14034;

	class ItemUseBuffDataRow : public ::System::Object
	{
	public:
		::System::String* UseEffect; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* MazeBuffParam; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemFoodUseTag>* ConsumeTag; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* MazeBuffParam2; // 0x28
		::System::Int32 SatietyValue; // 0x30
		::System::Single PreviewHPRecoveryPercent; // 0x34
		::System::Boolean IsShowItemDesc; // 0x38
		::System::Boolean IsShowUseMultipleSlider; // 0x39
		::System::Boolean IsCheckHP; // 0x3A
		::System::Byte _padding0[0x1];
		::System::UInt32 ActivityCount; // 0x3C
		::System::UInt32 MazeBuffID2; // 0x40
		::System::Single PreviewPowerPercent; // 0x44
		::RPG::GameCore::ItemFoodTargetType UseTargetType; // 0x48
		::System::UInt32 UseMultipleMax; // 0x4C
		::System::UInt32 MazeBuffID; // 0x50
		::System::UInt32 ConsumeType; // 0x54
		::System::Single PreviewHPRecoveryValue; // 0x58
		::System::UInt32 UseDataID; // 0x5C
		::System::Single PreviewSkillPoint; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemUseBuffDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemUseBuffDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
