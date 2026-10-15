#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumAreaConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMAREACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8956D0)
#define RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D894F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaConfigRow_TypeDefinitionIndex = 14214;

	class MuseumAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* MuseumAreaTabIcon; // 0x10
		::System::String* MuseumAreaHintIcon; // 0x18
		::System::String* FirstWorldText; // 0x20
		::RPG::Client::TextID AreaItemNoTextID; // 0x28
		::System::UInt32 AreaID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MuseumAreaName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumAreaConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
