#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenTraitRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3694E0)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D369060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTraitRow_TypeDefinitionIndex = 11667;

	class ActivityHipplenTraitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* TraitUnlockDescParam; // 0x10
		::System::String* ImagePath; // 0x18
		::Il2CppArray<::System::Int32>* TraitDescParam; // 0x20
		::Il2CppArray<::System::UInt32>* Effects; // 0x28
		::RPG::Client::TextID TraitDesc; // 0x30
		::RPG::Client::TextID TraitTitle; // 0x40
		::System::UInt32 Rarity; // 0x50
		::System::Boolean IsEffectDelay; // 0x54
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TraitUnlockDesc; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenTraitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenTraitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
