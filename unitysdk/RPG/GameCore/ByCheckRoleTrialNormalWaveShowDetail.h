#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckRoleTrialNormalWaveShowDetail; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D495FA0)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D496120)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4960F0)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D495FB0)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D495F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckRoleTrialNormalWaveShowDetail_TypeDefinitionIndex = 23038;

	class ByCheckRoleTrialNormalWaveShowDetail : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
