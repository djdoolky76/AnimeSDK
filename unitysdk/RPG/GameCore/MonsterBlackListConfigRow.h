#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterBlackListConfigRow; }

#define RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8810F0)
#define RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D880FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterBlackListConfigRow_TypeDefinitionIndex = 12899;

	class MonsterBlackListConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Rank; // 0x10
		::System::UInt32 MonsterID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterBlackListConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterBlackListConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
