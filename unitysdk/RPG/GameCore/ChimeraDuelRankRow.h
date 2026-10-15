#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelRankRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELRANKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A8DA0)
#define RPG_GAMECORE_CHIMERADUELRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5A86C0)

namespace RPG::GameCore
{
	class ChimeraDuelRankRow : public ::System::Object
	{
	public:
		::System::String* RankIconPath; // 0x10
		::System::String* RankIconPrefabPath; // 0x18
		::System::UInt32 RankLevel; // 0x20
		::System::UInt32 RankMinScore; // 0x24
		::RPG::Client::TextID RankName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRankRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
