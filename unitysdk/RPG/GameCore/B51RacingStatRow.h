#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingStatRow; }
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGSTATROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D407160)
#define RPG_GAMECORE_B51RACINGSTATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D406E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingStatRow_TypeDefinitionIndex = 10966;

	class B51RacingStatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TierRequireValueList; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID Name; // 0x30
		::RPG::GameCore::B51RacingStatType ID; // 0x40
		::System::Single ExtraRatio; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGSTATROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingStatRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingStatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGSTATROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
