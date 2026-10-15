#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardEffectTargetSlot.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D670840)
#define RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D670630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardEffectInfo_TypeDefinitionIndex = 19927;

	class FateRinCaseBoardEffectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardEffectType EffectType; // 0x10
		::RPG::GameCore::FateRinCaseBoardEffectTargetSlot TargetSlot; // 0x14
		::System::Boolean WaitFinish; // 0x18
		::System::Boolean UseRandomDelayBeforePlay; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardEffectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardEffectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
