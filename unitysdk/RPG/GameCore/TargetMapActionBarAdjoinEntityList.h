#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetMapActionBarAdjoinEntityList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB680C0)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB68410)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB68340)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB68150)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB67FF0)

namespace RPG::GameCore
{
	class TargetMapActionBarAdjoinEntityList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* LoopCondition; // 0x10
		::System::Boolean ContainsSource; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* LessMaxCount; // 0x20
		::RPG::GameCore::DynamicFloat* GreaterMaxCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
