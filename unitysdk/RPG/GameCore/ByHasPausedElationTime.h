#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasPausedElationTime; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9A80)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F9C00)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F9BD0)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F9A90)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F9A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPausedElationTime_TypeDefinitionIndex = 22618;

	class ByHasPausedElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
