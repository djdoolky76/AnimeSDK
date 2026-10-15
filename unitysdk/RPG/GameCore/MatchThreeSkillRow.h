#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREESKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82D7C0)
#define RPG_GAMECORE_MATCHTHREESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82D4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeSkillRow_TypeDefinitionIndex = 11905;

	class MatchThreeSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillUnchangedImg; // 0x10
		::System::String* SkillChargedImg; // 0x18
		::System::String* SkillJson; // 0x20
		::System::String* DescFigure; // 0x28
		::System::String* BirdSkillTrailEffectPath; // 0x30
		::System::UInt32 VideoID; // 0x38
		::System::UInt32 SkillID; // 0x3C
		::RPG::Client::TextID Desc; // 0x40
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
