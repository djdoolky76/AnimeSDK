#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertLevelResultTextRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTLEVELRESULTTEXTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCDF0)
#define RPG_GAMECORE_COMICDESSERTLEVELRESULTTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DCBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertLevelResultTextRow_TypeDefinitionIndex = 11235;

	class ComicDessertLevelResultTextRow : public ::System::Object
	{
	public:
		::System::String* TalkerIconPath; // 0x10
		::System::UInt32 TalkNumber; // 0x18
		::System::UInt32 TalkGroupID; // 0x1C
		::RPG::Client::TextID SentenceText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTLEVELRESULTTEXTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertLevelResultTextRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertLevelResultTextRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTLEVELRESULTTEXTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
