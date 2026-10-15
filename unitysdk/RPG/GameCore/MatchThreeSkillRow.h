#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREESKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85B1B0)
#define RPG_GAMECORE_MATCHTHREESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85AEC0)

namespace RPG::GameCore
{
	class MatchThreeSkillRow : public ::System::Object
	{
	public:
		::System::String* BirdSkillTrailEffectPath; // 0x10
		::System::String* SkillJson; // 0x18
		::System::String* DescFigure; // 0x20
		::System::String* SkillUnchangedImg; // 0x28
		::System::String* SkillChargedImg; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 SkillID; // 0x48
		::System::UInt32 VideoID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
