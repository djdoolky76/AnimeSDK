#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertForumCommentRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTFORUMCOMMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC280)
#define RPG_GAMECORE_COMICDESSERTFORUMCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DBF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertForumCommentRow_TypeDefinitionIndex = 11239;

	class ComicDessertForumCommentRow : public ::System::Object
	{
	public:
		::System::String* UserIconPath; // 0x10
		::System::String* TalkerIconPath; // 0x18
		::RPG::Client::TextID CommentContent; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 ParentCommentID; // 0x34
		::RPG::Client::TextID UserName; // 0x38
		::System::Boolean IsPlayer; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTFORUMCOMMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertForumCommentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertForumCommentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTFORUMCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
