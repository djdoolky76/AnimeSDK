#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInfiniteMonsterWaveLeft; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D8790)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D8970)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D8930)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D87A0)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D8750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInfiniteMonsterWaveLeft_TypeDefinitionIndex = 22573;

	class ByInfiniteMonsterWaveLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 TotalRank; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
