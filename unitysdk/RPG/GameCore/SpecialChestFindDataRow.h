#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FindChestReplaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialChestFindDataRow; }

#define RPG_GAMECORE_SPECIALCHESTFINDDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFDCF0)
#define RPG_GAMECORE_SPECIALCHESTFINDDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFD9D0)

namespace RPG::GameCore
{
	class SpecialChestFindDataRow : public ::System::Object
	{
	public:
		::System::UInt32 ReplaceInstanceID; // 0x10
		::System::UInt32 LittleGameEntityID; // 0x14
		::System::Boolean IsUseSpecialMappinginfo; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 ReplaceLittleGameEntityID; // 0x20
		::System::UInt32 ReplaceGroupID; // 0x24
		::System::UInt32 FloorID; // 0x28
		::RPG::GameCore::FindChestReplaceType ReplaceType; // 0x2C
		::System::UInt32 InstanceID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALCHESTFINDDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialChestFindDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialChestFindDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALCHESTFINDDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
