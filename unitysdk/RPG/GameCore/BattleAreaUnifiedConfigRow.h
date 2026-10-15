#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaUnifiedConfigRow; }

#define RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452790)
#define RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4526D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaUnifiedConfigRow_TypeDefinitionIndex = 12834;

	class BattleAreaUnifiedConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAreaUnifiedConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAreaUnifiedConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
