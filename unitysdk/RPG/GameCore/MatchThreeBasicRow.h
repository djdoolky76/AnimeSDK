#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeBasicRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEBASICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8542B0)
#define RPG_GAMECORE_MATCHTHREEBASICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D853CC0)

namespace RPG::GameCore
{
	class MatchThreeBasicRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 StyleID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeBasicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeBasicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
