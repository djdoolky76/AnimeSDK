#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsEvolveBuildCountDownItemShow; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D512ED0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D513050)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D513020)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D512EE0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D512EA0)

namespace RPG::GameCore
{
	class ByIsEvolveBuildCountDownItemShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
