#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLastKillTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB354B0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB35560)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB35520)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB354C0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB35420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillTarget_TypeDefinitionIndex = 24003;

	class TargetFetchLastKillTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
