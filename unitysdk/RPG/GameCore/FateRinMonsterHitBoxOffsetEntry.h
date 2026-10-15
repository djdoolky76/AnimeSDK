#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinMonsterHitBoxOffsetEntry; }

#define RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69EA40)
#define RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69E7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinMonsterHitBoxOffsetEntry_TypeDefinitionIndex = 18160;

	class FateRinMonsterHitBoxOffsetEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LeftOffset; // 0x10
		::System::Single RightOffset; // 0x14
		::System::Single UpOffset; // 0x18
		::System::Single DownOffset; // 0x1C
		::System::Single ForwardOffset; // 0x20
		::System::Single BackOffset; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
