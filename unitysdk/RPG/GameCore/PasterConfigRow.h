#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochurePasterType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PasterConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PASTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0BD00)
#define RPG_GAMECORE_PASTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB0A5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PasterConfigRow_TypeDefinitionIndex = 15527;

	class PasterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TravelBrochureID; // 0x10
		::System::String* TextPasterPrefab; // 0x18
		::System::Boolean DefaultUnlock; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TravelBrochurePasterType Type; // 0x24
		::RPG::Client::TextID PasterUnlockDesc; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 IncreaseCompletion; // 0x3C
		::RPG::Client::TextID PasterTextmap; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PasterConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PasterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
