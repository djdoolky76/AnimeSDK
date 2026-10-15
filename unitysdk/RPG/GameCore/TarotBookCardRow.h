#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCardRow; }

#define RPG_GAMECORE_TAROTBOOKCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47750)
#define RPG_GAMECORE_TAROTBOOKCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB47630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCardRow_TypeDefinitionIndex = 15229;

	class TarotBookCardRow : public ::System::Object
	{
	public:
		::System::UInt32 CharacterID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
