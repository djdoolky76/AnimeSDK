#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyBuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89C740)
#define RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D89C3F0)

namespace RPG::GameCore
{
	class MonopolyBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID BuffDesc; // 0x18
		::System::UInt32 Duration; // 0x28
		::System::Boolean IsPermanent; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 EffectID; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID BuffName; // 0x38
		::System::UInt32 Rank; // 0x48
		::System::UInt32 BuffID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyBuffConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
