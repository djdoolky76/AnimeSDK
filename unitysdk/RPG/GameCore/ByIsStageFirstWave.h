#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsStageFirstWave; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D523430)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5235B0)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D523580)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D523440)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D523400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageFirstWave_TypeDefinitionIndex = 23523;

	class ByIsStageFirstWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
