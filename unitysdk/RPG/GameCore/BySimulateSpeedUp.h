#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BySimulateSpeedUp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSIMULATESPEEDUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5088D0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D508A50)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D508A20)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5088E0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5088A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySimulateSpeedUp_TypeDefinitionIndex = 23303;

	class BySimulateSpeedUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
