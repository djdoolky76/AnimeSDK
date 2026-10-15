#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsAutoBattle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISAUTOBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D508370)
#define RPG_GAMECORE_BYISAUTOBATTLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D508540)
#define RPG_GAMECORE_BYISAUTOBATTLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D508500)
#define RPG_GAMECORE_BYISAUTOBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D508380)
#define RPG_GAMECORE_BYISAUTOBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D508330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAutoBattle_TypeDefinitionIndex = 22567;

	class ByIsAutoBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
