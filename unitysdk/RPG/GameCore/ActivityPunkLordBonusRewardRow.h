#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPunkLordBonusRewardRow; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D342FC0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D342940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordBonusRewardRow_TypeDefinitionIndex = 12293;

	class ActivityPunkLordBonusRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DropList; // 0x10
		::System::UInt32 BonusID; // 0x18
		::System::UInt32 BonusType; // 0x1C
		::System::UInt32 DisplayItemID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityPunkLordBonusRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
