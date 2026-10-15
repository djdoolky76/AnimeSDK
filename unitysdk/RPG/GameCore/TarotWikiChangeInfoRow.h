#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiChangeInfoRow; }

#define RPG_GAMECORE_TAROTWIKICHANGEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB78510)
#define RPG_GAMECORE_TAROTWIKICHANGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB782C0)

namespace RPG::GameCore
{
	class TarotWikiChangeInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID NewDetails; // 0x10
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 ChangeID; // 0x24
		::RPG::Client::TextID NewTitle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKICHANGEINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotWikiChangeInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotWikiChangeInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKICHANGEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
