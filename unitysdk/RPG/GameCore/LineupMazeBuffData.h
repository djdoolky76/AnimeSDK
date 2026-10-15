#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LINEUPMAZEBUFFDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5BB0)
#define RPG_GAMECORE_LINEUPMAZEBUFFDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D5A10)

namespace RPG::GameCore
{
	class LineupMazeBuffData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 OwnerCharacterIndex; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 Level; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExtraParamMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LineupMazeBuffData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LineupMazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
