#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTutorialFinish; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTUTORIALFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FBDC0)
#define RPG_GAMECORE_BYISTUTORIALFINISH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FBF70)
#define RPG_GAMECORE_BYISTUTORIALFINISH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FBF40)
#define RPG_GAMECORE_BYISTUTORIALFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FBDD0)
#define RPG_GAMECORE_BYISTUTORIALFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FBD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTutorialFinish_TypeDefinitionIndex = 24358;

	class ByIsTutorialFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
