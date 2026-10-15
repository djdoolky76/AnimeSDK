#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapGridOwner; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3CF70)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3D020)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3CFE0)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3CF80)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3CEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapGridOwner_TypeDefinitionIndex = 24256;

	class RtTargetMapGridOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
