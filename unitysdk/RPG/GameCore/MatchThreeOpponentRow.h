#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeOpponentRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEOPPONENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E0C0)
#define RPG_GAMECORE_MATCHTHREEOPPONENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB5DDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeOpponentRow_TypeDefinitionIndex = 11956;

	class MatchThreeOpponentRow : public ::System::Object
	{
	public:
		::System::String* AIConfig; // 0x10
		::System::String* MapImagePath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* ImagePath; // 0x28
		::RPG::Client::TextID Nickname; // 0x30
		::System::UInt32 AILevel; // 0x40
		::System::UInt32 OpponentID; // 0x44
		::System::UInt32 Level; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEOPPONENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeOpponentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeOpponentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEOPPONENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
