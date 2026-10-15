#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoExhibitionCommentRow; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90C960)
#define RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D90C730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionCommentRow_TypeDefinitionIndex = 12120;

	class PhotoExhibitionCommentRow : public ::System::Object
	{
	public:
		::System::String* NpcHandIcon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Reply; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoExhibitionCommentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoExhibitionCommentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
