#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvNpcFetchType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace RPG::GameCore { class TargetFetchAdvNpcEx; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVNPCEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5C780)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5C950)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5C920)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5C790)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5C750)

namespace RPG::GameCore
{
	class TargetFetchAdvNpcEx : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchAdvNpcFetchType FetchType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* SingleNpcKey; // 0x18
		::RPG::GameCore::FetchAdvNPCDataEx* SingleNpcID; // 0x20
		::RPG::GameCore::DynamicString* SingleUniqueName; // 0x28
		::RPG::GameCore::DynamicFloat* NpcIDInOwnerGroup; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
