#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }

#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5C160)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5B800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchInfoConfigRow_TypeDefinitionIndex = 11912;

	class MarbleMatchInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BNpcIds; // 0x10
		::Il2CppArray<::System::UInt32>* BanSealList; // 0x18
		::Il2CppArray<::System::UInt32>* ANpcIds; // 0x20
		::System::UInt32 CanGoMatchSubMission; // 0x28
		::System::UInt32 CustomID; // 0x2C
		::System::UInt32 Reward; // 0x30
		::System::UInt32 FirstType; // 0x34
		::System::UInt32 LevelID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 PlayerID; // 0x50
		::System::UInt32 Round; // 0x54
		::System::UInt32 AIRank; // 0x58
		::RPG::GameCore::MarblePhaseType PhaseID; // 0x5C
		::System::UInt32 PerformanceID; // 0x60
		::System::UInt32 ID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMatchInfoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMatchInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
