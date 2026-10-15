#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiTimelineRow; }

#define RPG_GAMECORE_TAROTWIKITIMELINEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB78D70)
#define RPG_GAMECORE_TAROTWIKITIMELINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB78AE0)

namespace RPG::GameCore
{
	class TarotWikiTimelineRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DataList; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::Single Progress; // 0x1C
		::System::UInt32 SpecialType; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Title; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKITIMELINEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotWikiTimelineRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotWikiTimelineRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKITIMELINEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
