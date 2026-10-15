#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_ParamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByDistToGuardPosition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA73CA0)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA73EF0)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA73EC0)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA73CB0)
#define RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA73C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistToGuardPosition_TypeDefinitionIndex = 20069;

	class ST_ByDistToGuardPosition : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_ParamType ValueType; // 0x20
		::System::Single MinValue; // 0x24
		::System::Single MaxValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTTOGUARDPOSITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
