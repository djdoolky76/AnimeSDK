#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMCOMMENTSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C5310)
#define RPG_GAMECORE_MUSEUMCOMMENTSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C5010)

namespace RPG::GameCore
{
	class MuseumCommentsRow : public ::System::Object
	{
	public:
		::System::String* CommentIconPath; // 0x10
		::RPG::Client::TextID CommentName; // 0x18
		::RPG::Client::TextID CommentContent; // 0x28
		::System::UInt32 AreaID; // 0x38
		::System::Boolean IsPositive; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 CommentID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMCOMMENTSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumCommentsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumCommentsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMCOMMENTSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
