#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapMoveTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3D210)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3D2C0)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3D280)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3D220)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3D180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapMoveTarget_TypeDefinitionIndex = 24252;

	class RtTargetMapMoveTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
