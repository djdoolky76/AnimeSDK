#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByInAIStatus; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYINAISTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4B050)
#define RPG_GAMECORE_ST_BYINAISTATUS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA4B220)
#define RPG_GAMECORE_ST_BYINAISTATUS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA4B1F0)
#define RPG_GAMECORE_ST_BYINAISTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4B060)
#define RPG_GAMECORE_ST_BYINAISTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAIStatus_TypeDefinitionIndex = 20087;

	class ST_ByInAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIStatus>* States; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
