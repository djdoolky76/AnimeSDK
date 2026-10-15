#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYAIHANGUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA71000)
#define RPG_GAMECORE_ST_BYAIHANGUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA71180)
#define RPG_GAMECORE_ST_BYAIHANGUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA71150)
#define RPG_GAMECORE_ST_BYAIHANGUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA71010)
#define RPG_GAMECORE_ST_BYAIHANGUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAIHangUp_TypeDefinitionIndex = 20077;

	class ST_ByAIHangUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
