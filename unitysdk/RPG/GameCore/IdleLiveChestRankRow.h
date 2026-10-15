#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChestRankRow; }

#define RPG_GAMECORE_IDLELIVECHESTRANKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D779680)
#define RPG_GAMECORE_IDLELIVECHESTRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D779500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChestRankRow_TypeDefinitionIndex = 11748;

	class IdleLiveChestRankRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RarityList; // 0x10
		::System::UInt32 Rank; // 0x18
		::System::UInt32 RequiredLevel; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHESTRANKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveChestRankRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveChestRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHESTRANKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
