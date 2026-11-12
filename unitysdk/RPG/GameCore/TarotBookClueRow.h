#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookClueRow; }

#define RPG_GAMECORE_TAROTBOOKCLUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE250E0)
#define RPG_GAMECORE_TAROTBOOKCLUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE24F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookClueRow_TypeDefinitionIndex = 15384;

	class TarotBookClueRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 Style; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCLUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookClueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookClueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCLUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
