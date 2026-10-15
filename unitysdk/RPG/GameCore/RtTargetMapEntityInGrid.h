#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtTargetMapEntityInGrid; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BF80)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3C130)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3C0D0)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3BF90)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3BF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapEntityInGrid_TypeDefinitionIndex = 24257;

	class RtTargetMapEntityInGrid : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x18
		::System::Byte _padding1[0x4];
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
