#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiSubdataRow; }

#define RPG_GAMECORE_TAROTWIKISUBDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB78AD0)
#define RPG_GAMECORE_TAROTWIKISUBDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB78830)

namespace RPG::GameCore
{
	class TarotWikiSubdataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeID; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID Title; // 0x20
		::RPG::Client::TextID Details; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKISUBDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotWikiSubdataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotWikiSubdataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKISUBDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
