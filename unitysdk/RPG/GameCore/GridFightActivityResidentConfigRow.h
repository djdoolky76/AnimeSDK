#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActivityResidentConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92EF80)
#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E92EAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActivityResidentConfigRow_TypeDefinitionIndex = 13511;

	class GridFightActivityResidentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x10
		::System::String* TitleIconPath; // 0x18
		::System::String* IntroGuideImg; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x28
		::RPG::Client::TextID ResidentDesc; // 0x30
		::System::UInt32 SortWeight; // 0x40
		::System::Boolean IsShowRemainTime; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 RelatedActivityPanelID; // 0x48
		::System::UInt32 ActivityModuleID; // 0x4C
		::System::UInt32 ActivityID; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID ResidentBrief; // 0x58
		::RPG::Client::TextID ResidentName; // 0x68
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
