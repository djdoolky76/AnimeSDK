#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByPerceiveValueReachMax; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D397390)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D397510)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3974E0)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3973A0)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D397360)

namespace RPG::GameCore
{
	class AdvByPerceiveValueReachMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
