#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseRogueMagicUltraUnitSpecialFactor.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicUltraUnitSpecialFactorByFuncType; }

#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D78C0)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9D78D0)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D7870)

namespace RPG::GameCore
{
	class RogueMagicUltraUnitSpecialFactorByFuncType : public ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor
	{
	public:
		::RPG::GameCore::RogueMagicScepterFuncType ScepterFuncType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* MatchFactors; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
