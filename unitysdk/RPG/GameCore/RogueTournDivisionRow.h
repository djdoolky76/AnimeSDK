#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournDivisionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNDIVISIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4AB50)
#define RPG_GAMECORE_ROGUETOURNDIVISIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC4A850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDivisionRow_TypeDefinitionIndex = 15108;

	class RogueTournDivisionRow : public ::System::Object
	{
	public:
		::System::String* DivisionIconPrefabPath; // 0x10
		::System::String* DivisionIconPath; // 0x18
		::System::String* DivisionSmallIconPath; // 0x20
		::System::UInt32 DivisionProgress; // 0x28
		::System::UInt32 DivisionLevel; // 0x2C
		::RPG::Client::TextID DivisionHintDesc; // 0x30
		::RPG::Client::TextID DivisionName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournDivisionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournDivisionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
