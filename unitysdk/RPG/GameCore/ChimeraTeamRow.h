#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTeamRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERATEAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B0490)
#define RPG_GAMECORE_CHIMERATEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B0220)

namespace RPG::GameCore
{
	class ChimeraTeamRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RoundTalkMap; // 0x10
		::System::String* TeamConfigJson; // 0x18
		::System::String* TeamIcon; // 0x20
		::System::String* TeamName; // 0x28
		::System::String* TeamAvatarIcon; // 0x30
		::System::UInt32 Sort; // 0x38
		::System::UInt32 TeamID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTeamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTeamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
