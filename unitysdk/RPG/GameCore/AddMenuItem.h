#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_ADDMENUITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35B630)
#define RPG_GAMECORE_ADDMENUITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35B640)
#define RPG_GAMECORE_ADDMENUITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35B4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMenuItem_TypeDefinitionIndex = 21128;

	class AddMenuItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* MenuIconType; // 0x18
		::System::UInt32 MenuItemID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MenuItemTextID; // 0x28
		::System::String* DialoguePath; // 0x38
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x40
		::System::UInt32 PerformanceID; // 0x44
		::System::Boolean Important; // 0x48
		::System::Byte _padding1[0x3];
		::System::UInt32 ExtraInfo; // 0x4C
		::System::UInt32 MissionID; // 0x50
		::System::Byte _padding2[0x4];
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMENUITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMENUITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMENUITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
