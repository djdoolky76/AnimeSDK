#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsStageBuffAffectCurrentWave; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5500)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F5680)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F5650)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F5510)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F54D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageBuffAffectCurrentWave_TypeDefinitionIndex = 23521;

	class ByIsStageBuffAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
