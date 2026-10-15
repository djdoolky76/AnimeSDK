#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueUnlockConfigRow; }

#define RPG_GAMECORE_ROGUEUNLOCKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA45840)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA45200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueUnlockConfigRow_TypeDefinitionIndex = 14717;

	class RogueUnlockConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RogueUnlockID; // 0x10
		::System::UInt32 UnlockFinishWay; // 0x14
		::RPG::Client::TextID RogueUnlockDetail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueUnlockConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
