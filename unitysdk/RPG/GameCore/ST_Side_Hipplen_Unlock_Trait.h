#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Trait; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA84D90)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA84DA0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA84D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Unlock_Trait_TypeDefinitionIndex = 21306;

	class ST_Side_Hipplen_Unlock_Trait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
