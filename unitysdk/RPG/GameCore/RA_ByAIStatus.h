#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_ByAIStatus; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYAISTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9347A0)
#define RPG_GAMECORE_RA_BYAISTATUS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D9349B0)
#define RPG_GAMECORE_RA_BYAISTATUS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D934980)
#define RPG_GAMECORE_RA_BYAISTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9347B0)
#define RPG_GAMECORE_RA_BYAISTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D934770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAIStatus_TypeDefinitionIndex = 20050;

	class RA_ByAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AIStatus>* Status; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
