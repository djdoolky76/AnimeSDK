#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubPerformanceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47D970)
#define RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D47D6F0)

namespace RPG::GameCore
{
	class BoxingClubPerformanceConfigRow : public ::System::Object
	{
	public:
		::System::String* PlayerRank; // 0x10
		::System::String* Name; // 0x18
		::System::String* BubbleTalkEnemy; // 0x20
		::System::String* EnemyRank; // 0x28
		::System::String* BubbleTalkPlayer; // 0x30
		::System::UInt32 MonsterTemplateID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoxingClubPerformanceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoxingClubPerformanceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
