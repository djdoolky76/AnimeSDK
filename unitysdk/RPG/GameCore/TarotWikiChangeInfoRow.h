#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiChangeInfoRow; }

#define RPG_GAMECORE_TAROTWIKICHANGEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BF970)
#define RPG_GAMECORE_TAROTWIKICHANGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5BF720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotWikiChangeInfoRow_TypeDefinitionIndex = 15401;

	class TarotWikiChangeInfoRow : public ::System::Object
	{
	public:
		::System::UInt32 ChangeID; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::RPG::Client::TextID NewTitle; // 0x18
		::RPG::Client::TextID NewDetails; // 0x28
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
