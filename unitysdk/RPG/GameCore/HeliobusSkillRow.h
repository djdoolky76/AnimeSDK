#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA86E80)
#define RPG_GAMECORE_HELIOBUSSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA866E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSkillRow_TypeDefinitionIndex = 13914;

	class HeliobusSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillIconPath; // 0x10
		::System::UInt32 HeliobusSkillID; // 0x18
		::RPG::GameCore::SkillEffect SkillEffect; // 0x1C
		::System::UInt32 UnlockMissionID; // 0x20
		::System::UInt32 SkillUIPosition; // 0x24
		::System::UInt32 RelatedEventID; // 0x28
		::System::UInt32 UnlockToastMissionID; // 0x2C
		::RPG::Client::TextID BGDescription; // 0x30
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
