#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagQueryType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QueryHoyoTag; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_QUERYHOYOTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F290)
#define RPG_GAMECORE_QUERYHOYOTAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D95F4F0)
#define RPG_GAMECORE_QUERYHOYOTAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D95F4C0)
#define RPG_GAMECORE_QUERYHOYOTAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95F2A0)
#define RPG_GAMECORE_QUERYHOYOTAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95F260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QueryHoyoTag_TypeDefinitionIndex = 20746;

	class QueryHoyoTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::HoyoTagQueryType QueryType; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* QuertInput; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
