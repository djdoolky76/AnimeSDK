#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActivityResidentConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7254D0)
#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D725000)

namespace RPG::GameCore
{
	class GridFightActivityResidentConfigRow : public ::System::Object
	{
	public:
		::System::String* IntroGuideImg; // 0x10
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x20
		::System::String* TitleIconPath; // 0x28
		::RPG::Client::TextID ResidentName; // 0x30
		::System::UInt32 RelatedActivityPanelID; // 0x40
		::System::UInt32 ActivityID; // 0x44
		::System::UInt32 ActivityModuleID; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ResidentBrief; // 0x50
		::RPG::Client::TextID ResidentDesc; // 0x60
		::System::Boolean IsShowRemainTime; // 0x70
		::System::Byte _padding1[0x3];
		::System::UInt32 SortWeight; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActivityResidentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
