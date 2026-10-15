#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingExamCommentRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A130)
#define RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB49F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamCommentRow_TypeDefinitionIndex = 12452;

	class SwordTrainingExamCommentRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 CommentID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingExamCommentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingExamCommentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
