#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubStageConfigRow; }

#define RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF57A80)
#define RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DF57250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubStageConfigRow_TypeDefinitionIndex = 12990;

	class BoxingClubStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffOptionalList; // 0x10
		::RPG::Client::TextID BubbleTalkPlayer; // 0x18
		::RPG::Client::TextID BubbleTalkEnemy; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 BuffID; // 0x48
		::System::UInt32 MonsterWaveIndex; // 0x4C
		::System::UInt32 EventID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoxingClubStageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoxingClubStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
