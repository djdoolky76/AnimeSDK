#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueDecayEffectType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCBossDecayRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBOSSDECAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F575E00)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F575470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBossDecayRow_TypeDefinitionIndex = 14943;

	class RogueDLCBossDecayRow : public ::System::Object
	{
	public:
		::System::String* DecayIcon; // 0x10
		::System::String* BossEffectIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x28
		::Il2CppArray<::System::UInt32>* EffectParamList; // 0x30
		::RPG::Client::TextID BossDecayName; // 0x38
		::System::Boolean IsBuff; // 0x48
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID BossDecayComeFrom; // 0x50
		::RPG::Client::TextID BossDecayDesc; // 0x60
		::System::UInt32 BossDecayID; // 0x70
		::RPG::GameCore::ChessRogueDecayEffectType EffectType; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCBossDecayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCBossDecayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
