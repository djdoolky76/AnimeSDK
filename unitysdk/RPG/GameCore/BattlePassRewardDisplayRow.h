#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePassRewardDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D436720)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D436090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassRewardDisplayRow_TypeDefinitionIndex = 12873;

	class BattlePassRewardDisplayRow : public ::System::Object
	{
	public:
		::System::String* RewardIcon; // 0x10
		::System::UInt32 RewardItem; // 0x18
		::System::Boolean NumShow; // 0x1C
		::System::Boolean IsNew; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePassRewardDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePassRewardDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
