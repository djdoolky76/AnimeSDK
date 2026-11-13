#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideRogueType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideRogueTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDEROGUETABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA72770)
#define RPG_GAMECORE_GUIDEROGUETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA71DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabRow_TypeDefinitionIndex = 13463;

	class GuideRogueTabRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* ResBarKey; // 0x18
		::System::UInt32 Priority; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::RPG::GameCore::GuideRogueType GuideType; // 0x48
		::System::UInt32 IntroID; // 0x4C
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
