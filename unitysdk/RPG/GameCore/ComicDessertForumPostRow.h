#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertForumPostRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTFORUMPOSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC7B0)
#define RPG_GAMECORE_COMICDESSERTFORUMPOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DC290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertForumPostRow_TypeDefinitionIndex = 11237;

	class ComicDessertForumPostRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CommentIDList; // 0x10
		::System::String* PosterIconPath; // 0x18
		::System::String* PostPicPath; // 0x20
		::RPG::Client::TextID PlayerComment2; // 0x28
		::System::UInt32 PlayerComment1ID; // 0x38
		::System::UInt32 PlayerComment2ID; // 0x3C
		::RPG::Client::TextID PosterName; // 0x40
		::RPG::Client::TextID PlayerComment1; // 0x50
		::RPG::Client::TextID PostTitle; // 0x60
		::System::UInt32 ID; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PostContent; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTFORUMPOSTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertForumPostRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertForumPostRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTFORUMPOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
