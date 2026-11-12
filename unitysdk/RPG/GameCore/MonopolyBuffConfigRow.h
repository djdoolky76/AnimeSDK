#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyBuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB6A90)
#define RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAB6740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyBuffConfigRow_TypeDefinitionIndex = 12126;

	class MonopolyBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID BuffName; // 0x18
		::System::UInt32 BuffID; // 0x28
		::System::UInt32 Rank; // 0x2C
		::RPG::Client::TextID BuffDesc; // 0x30
		::System::UInt32 Duration; // 0x40
		::System::Boolean IsPermanent; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 EffectID; // 0x48
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
