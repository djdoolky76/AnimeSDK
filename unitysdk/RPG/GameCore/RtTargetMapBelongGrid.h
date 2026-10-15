#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapBelongGrid; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA68AC0)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA68B70)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA68B30)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA68AD0)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA68A30)

namespace RPG::GameCore
{
	class RtTargetMapBelongGrid : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
