#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveInsertUltraWait; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D21A0)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D23A0)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D2360)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D21B0)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D2160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveInsertUltraWait_TypeDefinitionIndex = 23549;

	class ByHaveInsertUltraWait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType FirstType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
