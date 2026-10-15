#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideTalkDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6C130)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC6B6E0)

namespace RPG::GameCore
{
	class TutorialGuideTalkDataRow : public ::System::Object
	{
	public:
		::System::String* AvatarHeadIcon; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TalkDataText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialGuideTalkDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialGuideTalkDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
