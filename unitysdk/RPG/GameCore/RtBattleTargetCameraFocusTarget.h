#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleTargetCameraFocusTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4F320)
#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA4F3D0)
#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA4F390)
#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4F330)
#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTargetCameraFocusTarget_TypeDefinitionIndex = 24244;

	class RtBattleTargetCameraFocusTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
