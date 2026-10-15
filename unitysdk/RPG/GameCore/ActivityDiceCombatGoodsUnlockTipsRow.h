#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatGoodsUnlockTipsRow; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D351C20)
#define RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D351AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatGoodsUnlockTipsRow_TypeDefinitionIndex = 11249;

	class ActivityDiceCombatGoodsUnlockTipsRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockTips; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
