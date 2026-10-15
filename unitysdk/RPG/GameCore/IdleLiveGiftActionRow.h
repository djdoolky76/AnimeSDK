#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftActionRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGIFTACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77C240)
#define RPG_GAMECORE_IDLELIVEGIFTACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77C060)

namespace RPG::GameCore
{
	class IdleLiveGiftActionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParam; // 0x10
		::System::String* AbilityName; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveGiftActionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveGiftActionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
