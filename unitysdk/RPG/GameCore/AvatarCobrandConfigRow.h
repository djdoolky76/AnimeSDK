#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarCobrandConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARCOBRANDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D8B0)
#define RPG_GAMECORE_AVATARCOBRANDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D40D6D0)

namespace RPG::GameCore
{
	class AvatarCobrandConfigRow : public ::System::Object
	{
	public:
		::System::String* OnStateName; // 0x10
		::System::String* OffStateName; // 0x18
		::System::String* StateGroupName; // 0x20
		::System::String* AudioLanguage; // 0x28
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOBRANDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarCobrandConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarCobrandConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOBRANDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
