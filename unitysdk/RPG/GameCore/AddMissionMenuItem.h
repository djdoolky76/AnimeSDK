#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddMissionMenuItem; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDMISSIONMENUITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D389950)
#define RPG_GAMECORE_ADDMISSIONMENUITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D389960)
#define RPG_GAMECORE_ADDMISSIONMENUITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D389910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMissionMenuItem_TypeDefinitionIndex = 21130;

	class AddMissionMenuItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* MenuIconType; // 0x20
		::System::UInt32 MenuItemID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MenuItemTextID; // 0x30
		::System::String* DialoguePath; // 0x40
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x48
		::System::UInt32 PerformanceID; // 0x4C
		::System::Boolean Important; // 0x50
		::System::Byte _padding1[0x3];
		::System::UInt32 ExtraInfo; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMISSIONMENUITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMissionMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMissionMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMISSIONMENUITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMissionMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMissionMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMISSIONMENUITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
