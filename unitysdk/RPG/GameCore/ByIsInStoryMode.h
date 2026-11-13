#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInStoryMode; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINSTORYMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20F580)
#define RPG_GAMECORE_BYISINSTORYMODE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E20F7D0)
#define RPG_GAMECORE_BYISINSTORYMODE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E20F790)
#define RPG_GAMECORE_BYISINSTORYMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E20F590)
#define RPG_GAMECORE_BYISINSTORYMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E20F540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInStoryMode_TypeDefinitionIndex = 20920;

	class ByIsInStoryMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CheckGlobal; // 0x20
		::System::Boolean CheckOwnerEntity; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
