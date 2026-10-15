#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMCOMMENTSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D897950)
#define RPG_GAMECORE_MUSEUMCOMMENTSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D897650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumCommentsRow_TypeDefinitionIndex = 14258;

	class MuseumCommentsRow : public ::System::Object
	{
	public:
		::System::String* CommentIconPath; // 0x10
		::System::UInt32 AreaID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CommentContent; // 0x20
		::System::Boolean IsPositive; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 CommentID; // 0x34
		::RPG::Client::TextID CommentName; // 0x38
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
