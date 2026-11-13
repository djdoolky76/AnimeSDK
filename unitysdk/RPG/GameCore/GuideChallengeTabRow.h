#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideChallengeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideChallengeTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDECHALLENGETABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA70030)
#define RPG_GAMECORE_GUIDECHALLENGETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA6F650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideChallengeTabRow_TypeDefinitionIndex = 13456;

	class GuideChallengeTabRow : public ::System::Object
	{
	public:
		::System::String* ResBarKey; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Priority; // 0x24
		::RPG::GameCore::GuideChallengeType GuideType; // 0x28
		::System::UInt32 IntroDataID; // 0x2C
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID Name; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuideChallengeTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuideChallengeTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
