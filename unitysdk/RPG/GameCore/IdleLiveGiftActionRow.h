#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftActionRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGIFTACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98F970)
#define RPG_GAMECORE_IDLELIVEGIFTACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E98F790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGiftActionRow_TypeDefinitionIndex = 11861;

	class IdleLiveGiftActionRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParam; // 0x18
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x20
		::System::UInt32 ID; // 0x24
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
