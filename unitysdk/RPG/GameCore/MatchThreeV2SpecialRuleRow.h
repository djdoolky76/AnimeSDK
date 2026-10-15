#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2SpecialRuleRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85D740)
#define RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85D580)

namespace RPG::GameCore
{
	class MatchThreeV2SpecialRuleRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::UInt32 SpecialRuleID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2SpecialRuleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
