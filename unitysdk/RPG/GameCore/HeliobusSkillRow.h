#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7656D0)
#define RPG_GAMECORE_HELIOBUSSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D764F70)

namespace RPG::GameCore
{
	class HeliobusSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillIconPath; // 0x10
		::System::UInt32 SkillUIPosition; // 0x18
		::System::UInt32 UnlockMissionID; // 0x1C
		::System::UInt32 UnlockToastMissionID; // 0x20
		::RPG::GameCore::SkillEffect SkillEffect; // 0x24
		::RPG::Client::TextID BGDescription; // 0x28
		::System::UInt32 HeliobusSkillID; // 0x38
		::System::UInt32 RelatedEventID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
