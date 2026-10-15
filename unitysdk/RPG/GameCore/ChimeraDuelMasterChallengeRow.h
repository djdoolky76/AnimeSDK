#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMasterChallengeRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3A90)
#define RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5A3880)

namespace RPG::GameCore
{
	class ChimeraDuelMasterChallengeRow : public ::System::Object
	{
	public:
		::System::String* MasterHeadIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PresetIDList; // 0x18
		::System::UInt32 ChallengeID; // 0x20
		::System::UInt32 MasterID; // 0x24
		::System::UInt32 MasterRankLevel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelMasterChallengeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
