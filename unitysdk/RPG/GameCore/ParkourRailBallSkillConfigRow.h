#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRailBallSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F144580)
#define RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F144220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallSkillConfigRow_TypeDefinitionIndex = 12158;

	class ParkourRailBallSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* MiniIconBGPath; // 0x20
		::System::UInt32 VideoID; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 TutorialID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourRailBallSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourRailBallSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
