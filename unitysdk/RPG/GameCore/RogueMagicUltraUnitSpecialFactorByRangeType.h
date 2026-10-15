#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseRogueMagicUltraUnitSpecialFactor.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicUltraUnitSpecialFactorByRangeType; }

#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7A30)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9D7A40)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D79E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUltraUnitSpecialFactorByRangeType_TypeDefinitionIndex = 17927;

	class RogueMagicUltraUnitSpecialFactorByRangeType : public ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor
	{
	public:
		::RPG::GameCore::RogueMagicRangeType ScpterRangeType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* MatchFactors; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByRangeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYRANGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
