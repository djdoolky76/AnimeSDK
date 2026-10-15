#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyEventEffectRow; }

#define RPG_GAMECORE_MONOPOLYEVENTEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8714A0)
#define RPG_GAMECORE_MONOPOLYEVENTEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D871280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventEffectRow_TypeDefinitionIndex = 12041;

	class MonopolyEventEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::RPG::GameCore::MonopolyEffectType Type; // 0x18
		::System::UInt32 EffectID; // 0x1C
		::RPG::Client::TextID EffectContent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyEventEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyEventEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
