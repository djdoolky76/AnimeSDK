#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideRogueType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideRogueTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDEROGUETABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E964A00)
#define RPG_GAMECORE_GUIDEROGUETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E964060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabRow_TypeDefinitionIndex = 13463;

	class GuideRogueTabRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* ResBarKey; // 0x18
		::RPG::GameCore::GuideRogueType GuideType; // 0x20
		::System::UInt32 IntroID; // 0x24
		::System::UInt32 Priority; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuideRogueTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuideRogueTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
