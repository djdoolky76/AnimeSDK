#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapBornPoint; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7B490)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EC7B540)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EC7B500)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC7B4A0)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC7B400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapBornPoint_TypeDefinitionIndex = 24712;

	class RtTargetMapBornPoint : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
