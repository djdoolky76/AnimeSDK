#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CIFJBKHOIDF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C26B0)
#define RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C2490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRankingListConfigRow_TypeDefinitionIndex = 12106;

	class ParkourRankingListConfigRow : public ::System::Object
	{
	public:
		::System::String* NPCIconPath; // 0x10
		::Il2CppArray<::CIFJBKHOIDF*>* LevelBestRecordList; // 0x18
		::System::UInt32 RailBallID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NPCName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourRankingListConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourRankingListConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
