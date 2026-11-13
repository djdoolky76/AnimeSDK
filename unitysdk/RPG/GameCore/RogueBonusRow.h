#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBonusRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBONUSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F564570)
#define RPG_GAMECORE_ROGUEBONUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F563D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusRow_TypeDefinitionIndex = 14843;

	class RogueBonusRow : public ::System::Object
	{
	public:
		::System::String* BonusIcon; // 0x10
		::RPG::Client::TextID BonusDesc; // 0x18
		::RPG::Client::TextID BonusTitle; // 0x28
		::System::UInt32 BonusEvent; // 0x38
		::System::UInt32 BonusID; // 0x3C
		::RPG::Client::TextID BonusTag; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBonusRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBonusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
